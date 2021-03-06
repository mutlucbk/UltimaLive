/* @file
 *
 * Copyright(c) 2016 UltimaLive
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifdef DEBUG

#include "ClientCrashPacketHandler.h"
#include "..\NetworkManager.h"

 /**
 * @brief ClientCrashPacketHandler constructor
 */
ClientCrashPacketHandler::ClientCrashPacketHandler(NetworkManager* pManager)
  : BasePacketHandler(pManager)
{
  //do nothing
}

/**
 * @brief Handles the map change packet from the server 
 *
 * @verbose
 * Packet Definition:
 *   byte 00            Packet ID: 0xBF (Extended Command)
 *   byte 01 - 02       Packet Size 
 *   byte 03 - 04       Extended Command ID: 0x08
 *   byte 05            Map ID
 *
 * @return true
 */
bool ClientCrashPacketHandler::handlePacket(uint8_t*)
{
  Logger::g_pLogger->LogPrintError("Client crash!!!\n");
  return true;
}

#endif