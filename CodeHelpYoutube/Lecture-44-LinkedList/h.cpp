write a program of linkdedlist where we are taking value of music title and the artist name and the duration of the song and add th e fnctionalites to add and remove the song, titlte and the artist name and the duration of the song

#include<iostream>
    using namespace std;

struct Song{
    string title[];
    string artist[];
    int duration;
    struct Song *next;
} Song;

void addSong(Song **head, string title[], string artist[], int duration){
    Song *newNode = (Song *)malloc(sizeof(Song));
    strcpy(newNode->title, title);
    strcpy(newNode->artist, artist);
    newNode->duration = duration;
    newNode->next = *head;
    *head = newNode;
}

void removeSong(Song **head, string title[], string artist[]){
    Song *current = *head, *prev;
    if(current != NULL && strcmp(current->title, title) == 0 && strcmp(current->artist, artist) == 0){
        *head = current->next;
        free(current);
        return;
    }
    while(current != NULL && (strcmp(current->title, title) != 0 || strcmp(current->artist, artist) != 0)){
        prev = current;
        current = current->next;
    }
    if(current == NULL) return;
    prev->next = current->next;
    free(current);
}

void displaySongs(Song *head){
    Song *current = head;
    while(current != NULL){
        cout<<"Title: "<<current->title<<", Artist: "<<current->artist<<", Duration: "<<current->duration<<" minutes"<<endl;
        current = current->next;
    }
}
