// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::TestRunner::Callbacks
namespace UnityEngine::TestTools::TestRunner::Callbacks {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Forward declaring namespace: UnityEngine::TestRunner::TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
  // Forward declaring type: IRemoteTestResultDataFactory
  class IRemoteTestResultDataFactory;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: ITestResult
  class ITestResult;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner.Callbacks
namespace UnityEngine::TestTools::TestRunner::Callbacks {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender
  // [AddComponentMenu] Offset: E3DB78
  class RemoteTestResultSender : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData
    class QueueData;
    // Nested type: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12
    class $SendDataRoutine$d__12;
    // private System.Single m_NextliveMessage
    // Size: 0x4
    // Offset: 0x18
    float m_NextliveMessage;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: m_NextliveMessage and: m_SendQueue
    char __padding0[0x4] = {};
    // private readonly System.Collections.Generic.Queue`1<UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender/QueueData> m_SendQueue
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::Queue_1<UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData*>* m_SendQueue;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Queue_1<UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData*>*) == 0x8);
    // private readonly System.Object m_LockQueue
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* m_LockQueue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly UnityEngine.TestRunner.TestLaunchers.IRemoteTestResultDataFactory m_TestResultDataFactory
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::TestRunner::TestLaunchers::IRemoteTestResultDataFactory* m_TestResultDataFactory;
    // Field size check
    static_assert(sizeof(UnityEngine::TestRunner::TestLaunchers::IRemoteTestResultDataFactory*) == 0x8);
    // Creating value type constructor for type: RemoteTestResultSender
    RemoteTestResultSender(float m_NextliveMessage_ = {}, System::Collections::Generic::Queue_1<UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData*>* m_SendQueue_ = {}, ::Il2CppObject* m_LockQueue_ = {}, UnityEngine::TestRunner::TestLaunchers::IRemoteTestResultDataFactory* m_TestResultDataFactory_ = {}) noexcept : m_NextliveMessage{m_NextliveMessage_}, m_SendQueue{m_SendQueue_}, m_LockQueue{m_LockQueue_}, m_TestResultDataFactory{m_TestResultDataFactory_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 k_aliveMessageFrequency
    static constexpr const int k_aliveMessageFrequency = 120;
    // Get static field: static private System.Int32 k_aliveMessageFrequency
    static int _get_k_aliveMessageFrequency();
    // Set static field: static private System.Int32 k_aliveMessageFrequency
    static void _set_k_aliveMessageFrequency(int value);
    // public System.Void Start()
    // Offset: 0x14BAFAC
    void Start();
    // private System.Byte[] SerializeObject(System.Object objectToSerialize)
    // Offset: 0x14BB048
    ::Array<uint8_t>* SerializeObject(::Il2CppObject* objectToSerialize);
    // public System.Void RunStarted(NUnit.Framework.Interfaces.ITest testsToRun)
    // Offset: 0x14BB098
    void RunStarted(NUnit::Framework::Interfaces::ITest* testsToRun);
    // public System.Void RunFinished(NUnit.Framework.Interfaces.ITestResult testResults)
    // Offset: 0x14BB23C
    void RunFinished(NUnit::Framework::Interfaces::ITestResult* testResults);
    // public System.Void TestStarted(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x14BB3D4
    void TestStarted(NUnit::Framework::Interfaces::ITest* test);
    // public System.Void TestFinished(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0x14BB570
    void TestFinished(NUnit::Framework::Interfaces::ITestResult* result);
    // public System.Collections.IEnumerator SendDataRoutine()
    // Offset: 0x14BAFD8
    System::Collections::IEnumerator* SendDataRoutine();
    // private System.Void SendAliveMessageIfNeeded()
    // Offset: 0x14BB734
    void SendAliveMessageIfNeeded();
    // private System.Void ResetNextPlayerAliveMessageTime()
    // Offset: 0x14BB834
    void ResetNextPlayerAliveMessageTime();
    // public System.Void .ctor()
    // Offset: 0x14BB868
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemoteTestResultSender* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemoteTestResultSender*, creationType>()));
    }
  }; // UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender
  #pragma pack(pop)
  static check_size<sizeof(RemoteTestResultSender), 48 + sizeof(UnityEngine::TestRunner::TestLaunchers::IRemoteTestResultDataFactory*)> __UnityEngine_TestTools_TestRunner_Callbacks_RemoteTestResultSenderSizeCheck;
  static_assert(sizeof(RemoteTestResultSender) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender*, "UnityEngine.TestTools.TestRunner.Callbacks", "RemoteTestResultSender");
// Writing includes for template specializations
#include "NUnit/Framework/Interfaces/ITest.hpp"
#include "NUnit/Framework/Interfaces/ITestResult.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::*)()>(&UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::SerializeObject
// Il2CppName: SerializeObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::*)(::Il2CppObject*)>(&UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::SerializeObject)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender*), "SerializeObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::RunStarted
// Il2CppName: RunStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::*)(NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::RunStarted)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender*), "RunStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<NUnit::Framework::Interfaces::ITest*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::RunFinished
// Il2CppName: RunFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::*)(NUnit::Framework::Interfaces::ITestResult*)>(&UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::RunFinished)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender*), "RunFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<NUnit::Framework::Interfaces::ITestResult*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::TestStarted
// Il2CppName: TestStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::*)(NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::TestStarted)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender*), "TestStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<NUnit::Framework::Interfaces::ITest*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::TestFinished
// Il2CppName: TestFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::*)(NUnit::Framework::Interfaces::ITestResult*)>(&UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::TestFinished)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender*), "TestFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<NUnit::Framework::Interfaces::ITestResult*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::SendDataRoutine
// Il2CppName: SendDataRoutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::*)()>(&UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::SendDataRoutine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender*), "SendDataRoutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::SendAliveMessageIfNeeded
// Il2CppName: SendAliveMessageIfNeeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::*)()>(&UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::SendAliveMessageIfNeeded)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender*), "SendAliveMessageIfNeeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::ResetNextPlayerAliveMessageTime
// Il2CppName: ResetNextPlayerAliveMessageTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::*)()>(&UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::ResetNextPlayerAliveMessageTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender*), "ResetNextPlayerAliveMessageTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
