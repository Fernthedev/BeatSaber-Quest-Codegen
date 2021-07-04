// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Timer
#include "System/Threading/Timer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: SortedList
  class SortedList;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Timer/Scheduler
  class Timer::Scheduler : public ::Il2CppObject {
    public:
    // private System.Collections.SortedList list
    // Size: 0x8
    // Offset: 0x10
    System::Collections::SortedList* list;
    // Field size check
    static_assert(sizeof(System::Collections::SortedList*) == 0x8);
    // private System.Threading.ManualResetEvent changed
    // Size: 0x8
    // Offset: 0x18
    System::Threading::ManualResetEvent* changed;
    // Field size check
    static_assert(sizeof(System::Threading::ManualResetEvent*) == 0x8);
    // Creating value type constructor for type: Scheduler
    Scheduler(System::Collections::SortedList* list_ = {}, System::Threading::ManualResetEvent* changed_ = {}) noexcept : list{list_}, changed{changed_} {}
    // Get static field: static private System.Threading.Timer/Scheduler instance
    static System::Threading::Timer::Scheduler* _get_instance();
    // Set static field: static private System.Threading.Timer/Scheduler instance
    static void _set_instance(System::Threading::Timer::Scheduler* value);
    // static private System.Void .cctor()
    // Offset: 0x18959E8
    static void _cctor();
    // static public System.Threading.Timer/Scheduler get_Instance()
    // Offset: 0x1895B64
    static System::Threading::Timer::Scheduler* get_Instance();
    // public System.Void Remove(System.Threading.Timer timer)
    // Offset: 0x18956F4
    void Remove(System::Threading::Timer* timer);
    // public System.Void Change(System.Threading.Timer timer, System.Int64 new_next_run)
    // Offset: 0x18957A4
    void Change(System::Threading::Timer* timer, int64_t new_next_run);
    // private System.Int32 FindByDueTime(System.Int64 nr)
    // Offset: 0x1895D64
    int FindByDueTime(int64_t nr);
    // private System.Void Add(System.Threading.Timer timer)
    // Offset: 0x1895C34
    void Add(System::Threading::Timer* timer);
    // private System.Int32 InternalRemove(System.Threading.Timer timer)
    // Offset: 0x1895BD4
    int InternalRemove(System::Threading::Timer* timer);
    // static private System.Void TimerCB(System.Object o)
    // Offset: 0x1895EC0
    static void TimerCB(::Il2CppObject* o);
    // private System.Void SchedulerThread()
    // Offset: 0x18962C8
    void SchedulerThread();
    // private System.Void ShrinkIfNeeded(System.Collections.Generic.List`1<System.Threading.Timer> list, System.Int32 initial)
    // Offset: 0x1896828
    void ShrinkIfNeeded(System::Collections::Generic::List_1<System::Threading::Timer*>* list, int initial);
    // private System.Void .ctor()
    // Offset: 0x1895A48
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Timer::Scheduler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Timer::Scheduler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Timer::Scheduler*, creationType>()));
    }
  }; // System.Threading.Timer/Scheduler
  #pragma pack(pop)
  static check_size<sizeof(Timer::Scheduler), 24 + sizeof(System::Threading::ManualResetEvent*)> __System_Threading_Timer_SchedulerSizeCheck;
  static_assert(sizeof(Timer::Scheduler) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Timer::Scheduler*, "System.Threading", "Timer/Scheduler");
// Writing includes for template specializations
#include "System/Collections/Generic/List_1.hpp"
// Writing MetadataGetter for method: System::Threading::Timer::Scheduler::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::Timer::Scheduler::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Timer::Scheduler*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Timer::Scheduler::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Timer::Scheduler* (*)()>(&System::Threading::Timer::Scheduler::get_Instance)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Timer::Scheduler*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Timer::Scheduler::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Timer::Scheduler::*)(System::Threading::Timer*)>(&System::Threading::Timer::Scheduler::Remove)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Timer::Scheduler*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Threading::Timer*>()});
  }
};
// Writing MetadataGetter for method: System::Threading::Timer::Scheduler::Change
// Il2CppName: Change
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Timer::Scheduler::*)(System::Threading::Timer*, int64_t)>(&System::Threading::Timer::Scheduler::Change)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Timer::Scheduler*), "Change", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Threading::Timer*>(), ::il2cpp_utils::ExtractIndependentType<int64_t>()});
  }
};
// Writing MetadataGetter for method: System::Threading::Timer::Scheduler::FindByDueTime
// Il2CppName: FindByDueTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Threading::Timer::Scheduler::*)(int64_t)>(&System::Threading::Timer::Scheduler::FindByDueTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Timer::Scheduler*), "FindByDueTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int64_t>()});
  }
};
// Writing MetadataGetter for method: System::Threading::Timer::Scheduler::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Timer::Scheduler::*)(System::Threading::Timer*)>(&System::Threading::Timer::Scheduler::Add)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Timer::Scheduler*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Threading::Timer*>()});
  }
};
// Writing MetadataGetter for method: System::Threading::Timer::Scheduler::InternalRemove
// Il2CppName: InternalRemove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Threading::Timer::Scheduler::*)(System::Threading::Timer*)>(&System::Threading::Timer::Scheduler::InternalRemove)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Timer::Scheduler*), "InternalRemove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Threading::Timer*>()});
  }
};
// Writing MetadataGetter for method: System::Threading::Timer::Scheduler::TimerCB
// Il2CppName: TimerCB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::Threading::Timer::Scheduler::TimerCB)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Timer::Scheduler*), "TimerCB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Threading::Timer::Scheduler::SchedulerThread
// Il2CppName: SchedulerThread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Timer::Scheduler::*)()>(&System::Threading::Timer::Scheduler::SchedulerThread)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Timer::Scheduler*), "SchedulerThread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Timer::Scheduler::ShrinkIfNeeded
// Il2CppName: ShrinkIfNeeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Timer::Scheduler::*)(System::Collections::Generic::List_1<System::Threading::Timer*>*, int)>(&System::Threading::Timer::Scheduler::ShrinkIfNeeded)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Timer::Scheduler*), "ShrinkIfNeeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<System::Threading::Timer*>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Threading::Timer::Scheduler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
