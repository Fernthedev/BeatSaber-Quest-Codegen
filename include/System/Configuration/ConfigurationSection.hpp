// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Configuration.ConfigurationElement
#include "System/Configuration/ConfigurationElement.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlReader
  class XmlReader;
}
// Forward declaring namespace: System::Configuration
namespace System::Configuration {
  // Forward declaring type: ConfigurationSaveMode
  struct ConfigurationSaveMode;
}
// Completed forward declares
// Type namespace: System.Configuration
namespace System::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Configuration.ConfigurationSection
  class ConfigurationSection : public System::Configuration::ConfigurationElement {
    public:
    // Creating value type constructor for type: ConfigurationSection
    ConfigurationSection() noexcept {}
    // protected internal System.Void DeserializeSection(System.Xml.XmlReader reader)
    // Offset: 0x23F362C
    void DeserializeSection(System::Xml::XmlReader* reader);
    // protected internal System.String SerializeSection(System.Configuration.ConfigurationElement parentElement, System.String name, System.Configuration.ConfigurationSaveMode saveMode)
    // Offset: 0x23F36EC
    ::Il2CppString* SerializeSection(System::Configuration::ConfigurationElement* parentElement, ::Il2CppString* name, System::Configuration::ConfigurationSaveMode saveMode);
    // protected internal override System.Boolean IsModified()
    // Offset: 0x23F366C
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Boolean ConfigurationElement::IsModified()
    bool IsModified();
    // protected internal override System.Void ResetModified()
    // Offset: 0x23F36AC
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Void ConfigurationElement::ResetModified()
    void ResetModified();
  }; // System.Configuration.ConfigurationSection
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Configuration::ConfigurationSection*, "System.Configuration", "ConfigurationSection");
// Writing includes for template specializations
#include "System/Xml/XmlReader.hpp"
#include "System/Configuration/ConfigurationSaveMode.hpp"
// Writing MetadataGetter for method: System::Configuration::ConfigurationSection::DeserializeSection
// Il2CppName: DeserializeSection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Configuration::ConfigurationSection::*)(System::Xml::XmlReader*)>(&System::Configuration::ConfigurationSection::DeserializeSection)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::ConfigurationSection*), "DeserializeSection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Xml::XmlReader*>()});
  }
};
// Writing MetadataGetter for method: System::Configuration::ConfigurationSection::SerializeSection
// Il2CppName: SerializeSection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Configuration::ConfigurationSection::*)(System::Configuration::ConfigurationElement*, ::Il2CppString*, System::Configuration::ConfigurationSaveMode)>(&System::Configuration::ConfigurationSection::SerializeSection)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::ConfigurationSection*), "SerializeSection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Configuration::ConfigurationElement*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Configuration::ConfigurationSaveMode>()});
  }
};
// Writing MetadataGetter for method: System::Configuration::ConfigurationSection::IsModified
// Il2CppName: IsModified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Configuration::ConfigurationSection::*)()>(&System::Configuration::ConfigurationSection::IsModified)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::ConfigurationSection*), "IsModified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Configuration::ConfigurationSection::ResetModified
// Il2CppName: ResetModified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Configuration::ConfigurationSection::*)()>(&System::Configuration::ConfigurationSection::ResetModified)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::ConfigurationSection*), "ResetModified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
