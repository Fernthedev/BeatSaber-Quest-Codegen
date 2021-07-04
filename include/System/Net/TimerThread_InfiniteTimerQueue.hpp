// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.TimerThread
#include "System/Net/TimerThread.hpp"
// Including type: System.Net.TimerThread/Queue
#include "System/Net/TimerThread_Queue.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.TimerThread/InfiniteTimerQueue
  class TimerThread::InfiniteTimerQueue : public System::Net::TimerThread::Queue {
    public:
    // Creating value type constructor for type: InfiniteTimerQueue
    InfiniteTimerQueue() noexcept {}
    // System.Void .ctor()
    // Offset: 0x15BA6CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimerThread::InfiniteTimerQueue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::TimerThread::InfiniteTimerQueue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimerThread::InfiniteTimerQueue*, creationType>()));
    }
  }; // System.Net.TimerThread/InfiniteTimerQueue
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::TimerThread::InfiniteTimerQueue*, "System.Net", "TimerThread/InfiniteTimerQueue");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::Net::TimerThread::InfiniteTimerQueue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
