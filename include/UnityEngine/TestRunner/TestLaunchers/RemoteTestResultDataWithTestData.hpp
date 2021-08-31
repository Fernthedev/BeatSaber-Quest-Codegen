// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
  // Forward declaring type: RemoteTestResultData
  class RemoteTestResultData;
  // Forward declaring type: RemoteTestData
  class RemoteTestData;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.TestLaunchers.RemoteTestResultDataWithTestData
  // [TokenAttribute] Offset: FFFFFFFF
  class RemoteTestResultDataWithTestData : public ::Il2CppObject {
    public:
    // public UnityEngine.TestRunner.TestLaunchers.RemoteTestResultData[] results
    // Size: 0x8
    // Offset: 0x10
    ::Array<UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData*>* results;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData*>*) == 0x8);
    // public UnityEngine.TestRunner.TestLaunchers.RemoteTestData[] tests
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::TestRunner::TestLaunchers::RemoteTestData*>* tests;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::TestRunner::TestLaunchers::RemoteTestData*>*) == 0x8);
    // Creating value type constructor for type: RemoteTestResultDataWithTestData
    RemoteTestResultDataWithTestData(::Array<UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData*>* results_ = {}, ::Array<UnityEngine::TestRunner::TestLaunchers::RemoteTestData*>* tests_ = {}) noexcept : results{results_}, tests{tests_} {}
    // Get instance field: public UnityEngine.TestRunner.TestLaunchers.RemoteTestResultData[] results
    ::Array<UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData*>* _get_results();
    // Set instance field: public UnityEngine.TestRunner.TestLaunchers.RemoteTestResultData[] results
    void _set_results(::Array<UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData*>* value);
    // Get instance field: public UnityEngine.TestRunner.TestLaunchers.RemoteTestData[] tests
    ::Array<UnityEngine::TestRunner::TestLaunchers::RemoteTestData*>* _get_tests();
    // Set instance field: public UnityEngine.TestRunner.TestLaunchers.RemoteTestData[] tests
    void _set_tests(::Array<UnityEngine::TestRunner::TestLaunchers::RemoteTestData*>* value);
    // public System.Void .ctor()
    // Offset: 0x14BD7F4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemoteTestResultDataWithTestData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataWithTestData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemoteTestResultDataWithTestData*, creationType>()));
    }
  }; // UnityEngine.TestRunner.TestLaunchers.RemoteTestResultDataWithTestData
  #pragma pack(pop)
  static check_size<sizeof(RemoteTestResultDataWithTestData), 24 + sizeof(::Array<UnityEngine::TestRunner::TestLaunchers::RemoteTestData*>*)> __UnityEngine_TestRunner_TestLaunchers_RemoteTestResultDataWithTestDataSizeCheck;
  static_assert(sizeof(RemoteTestResultDataWithTestData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataWithTestData*, "UnityEngine.TestRunner.TestLaunchers", "RemoteTestResultDataWithTestData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataWithTestData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
