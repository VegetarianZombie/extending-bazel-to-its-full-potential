package com.example.messenger;

import static org.junit.jupiter.api.Assertions.assertEquals;  
import org.junit.jupiter.api.DisplayName;                       
import org.junit.jupiter.api.Test;                              
  

public class MessengerTest {
    @Test
    @DisplayName("Can retrieve message")
    public void testGetMessage() {
        Messenger messenger = new Messenger();
        assertEquals("HELLO WORLD!", messenger.getMessage());
    }
}

