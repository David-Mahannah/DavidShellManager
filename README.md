# DavidShellManager - SSH Profile Management Library
A C++ based library built to store and open Profile based SSH Sessions.

## Table of Contents
* [Introduction](#Introduction)
* [Technologies](#Technologies)
* [Design Patterns](#Design Patterns)
* [Analysis](#Analysis)
* [Conclusion](#Conclusion)

## Introduction
Quizscrape is a python webscraper for quiz answers using existing quizlet decks created by professors and students in the past.
With the COVID Pandemic bringing most schooling online, I noticed a much greater level of cheating amoungst my peers
through use of the web. Particularly in the form of searching through Quizlet decks. This project is an experiment 
to see to what extent the massive amount of public data online can be utilized for the purposes of academic dishonesty. Using Quizlet decks itself is not a new method of cheating but employing webscraping and automation greatily increases the harmfulness of this practice due to its far greater efficiency. I do not intend to use this personally and strongly suggest others not to use this in practice either for the sake of their own education. That being said, I did get a bit carried away with the ui design and presentation so just to be absolutely clear, **This application was made purely for the sake of experiment and not for personal use of monotization.** In fact, as I will refer to in my analysis, this tool proves of little use to a computer science student due to its behavior.

## Technologies
- C++
- Flask
- Beautiful Soup
- Selenium
- Scrapy

## Design Patterns
<img width="723" alt="Screen Shot 2022-01-27 at 9 20 41 AM" src="https://user-images.githubusercontent.com/44683761/151389524-aa0f9801-7c85-42b8-a522-a9a2171cc383.png">

## Setup

## Analysis
### Use Cases
This tool is primarily effective at finding purely categorical data such as bio terms, or history dates. Essentially information that isnt highly dependent on the logically processing the questions provided. For example: the query: "What is the capital of France" likely exists as a flashcard while "What is 34 * 2 + 11" is unlikely to be on any flashcards. 
### Efficiency
Search times are highly dependent on the hardware that the code is run on. Particularly the processor as the program is utilizes multithreading. Faster machines will take around 5-10 seconds but slower machines could take anywhere from 30-60 seconds or longer. I'm certain more efficient approaches can be developed but this application is written as proof of concept rather than a fully functioning marketable application.

## Conclusion
This project is far from perfect and may not run on all systems unless tinkered with a bit. The github branch history is a mess to say the least but served as a good tool to familiarize myself with github as both a tool for collaboration and project deployment. I am currently working to bring back the functionality of this code so a easily downloaded demo can be used. (1/25/22)
