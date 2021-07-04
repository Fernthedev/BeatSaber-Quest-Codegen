// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IAnalyticsModel
#include "GlobalNamespace/IAnalyticsModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NoAnalyticsModel
  class NoAnalyticsModel : public ::Il2CppObject/*, public GlobalNamespace::IAnalyticsModel*/ {
    public:
    // Creating value type constructor for type: NoAnalyticsModel
    NoAnalyticsModel() noexcept {}
    // Creating interface conversion operator: operator GlobalNamespace::IAnalyticsModel
    operator GlobalNamespace::IAnalyticsModel() noexcept {
      return *reinterpret_cast<GlobalNamespace::IAnalyticsModel*>(this);
    }
    // public System.Boolean get_supportsOpenDataPrivacyPage()
    // Offset: 0x11D10D4
    bool get_supportsOpenDataPrivacyPage();
    // public System.Void OpenDataPrivacyPage()
    // Offset: 0x11D10DC
    void OpenDataPrivacyPage();
    // public System.Void LogEvent(System.String eventType, System.Collections.Generic.Dictionary`2<System.String,System.String> eventData)
    // Offset: 0x11D10E0
    void LogEvent(::Il2CppString* eventType, System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* eventData);
    // public System.Void LogClick(System.String clickType, System.Collections.Generic.Dictionary`2<System.String,System.String> clickData)
    // Offset: 0x11D10E4
    void LogClick(::Il2CppString* clickType, System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* clickData);
    // public System.Void LogImpression(System.String impressionType, System.Collections.Generic.Dictionary`2<System.String,System.String> impressionData)
    // Offset: 0x11D10E8
    void LogImpression(::Il2CppString* impressionType, System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* impressionData);
    // public System.Void LogExposure(System.String exposureType, System.Collections.Generic.Dictionary`2<System.String,System.String> exposureData)
    // Offset: 0x11D10EC
    void LogExposure(::Il2CppString* exposureType, System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* exposureData);
    // public System.Void .ctor()
    // Offset: 0x11D10F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoAnalyticsModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoAnalyticsModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoAnalyticsModel*, creationType>()));
    }
  }; // NoAnalyticsModel
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoAnalyticsModel*, "", "NoAnalyticsModel");
// Writing includes for template specializations
#include "System/Collections/Generic/Dictionary_2.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoAnalyticsModel::get_supportsOpenDataPrivacyPage
// Il2CppName: get_supportsOpenDataPrivacyPage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::NoAnalyticsModel::*)()>(&GlobalNamespace::NoAnalyticsModel::get_supportsOpenDataPrivacyPage)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoAnalyticsModel*), "get_supportsOpenDataPrivacyPage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoAnalyticsModel::OpenDataPrivacyPage
// Il2CppName: OpenDataPrivacyPage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoAnalyticsModel::*)()>(&GlobalNamespace::NoAnalyticsModel::OpenDataPrivacyPage)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoAnalyticsModel*), "OpenDataPrivacyPage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoAnalyticsModel::LogEvent
// Il2CppName: LogEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoAnalyticsModel::*)(::Il2CppString*, System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*)>(&GlobalNamespace::NoAnalyticsModel::LogEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoAnalyticsModel*), "LogEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoAnalyticsModel::LogClick
// Il2CppName: LogClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoAnalyticsModel::*)(::Il2CppString*, System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*)>(&GlobalNamespace::NoAnalyticsModel::LogClick)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoAnalyticsModel*), "LogClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoAnalyticsModel::LogImpression
// Il2CppName: LogImpression
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoAnalyticsModel::*)(::Il2CppString*, System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*)>(&GlobalNamespace::NoAnalyticsModel::LogImpression)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoAnalyticsModel*), "LogImpression", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoAnalyticsModel::LogExposure
// Il2CppName: LogExposure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoAnalyticsModel::*)(::Il2CppString*, System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*)>(&GlobalNamespace::NoAnalyticsModel::LogExposure)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoAnalyticsModel*), "LogExposure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoAnalyticsModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
