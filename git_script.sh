#!/bin/bash
echo "Enter Your Commit Message"
read message
git add --all
git commit -m "$message"
git push
