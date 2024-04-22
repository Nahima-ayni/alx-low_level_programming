#!/usr/bin/python3
""" Python script that, using this REST API, for a given employee ID,
    returns information about his/her TODO list progress."""
import requests

def get_employee_todo_progress(employee_id):
    employee = requests.get(f'https://jsonplaceholder.typicode.com/users/{employee_id}').json()
    todos = requests.get(f'https://jsonplaceholder.typicode.com/users/{employee_id}/todos').json()

    total_tasks = len(todos)
    done_tasks = len([task for task in todos if task['completed']])

    print(f"Employee {employee['name']} is done with tasks({done_tasks}/{total_tasks}):")
    for task in todos:
        if task['completed']:
            print(f"\t {task['title']}")

if __name__ == "__main__":
    get_employee_todo_progress(1)
