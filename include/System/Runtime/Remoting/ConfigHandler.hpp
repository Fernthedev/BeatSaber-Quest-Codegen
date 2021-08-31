// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Xml.SmallXmlParser/Mono.Xml.IContentHandler
#include "Mono/Xml/SmallXmlParser_IContentHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: Stack
  class Stack;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ChannelData
  class ChannelData;
  // Forward declaring type: ProviderData
  class ProviderData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.ConfigHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class ConfigHandler : public ::Il2CppObject/*, public Mono::Xml::SmallXmlParser::IContentHandler*/ {
    public:
    // private System.Collections.ArrayList typeEntries
    // Size: 0x8
    // Offset: 0x10
    System::Collections::ArrayList* typeEntries;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // private System.Collections.ArrayList channelInstances
    // Size: 0x8
    // Offset: 0x18
    System::Collections::ArrayList* channelInstances;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // private System.Runtime.Remoting.ChannelData currentChannel
    // Size: 0x8
    // Offset: 0x20
    System::Runtime::Remoting::ChannelData* currentChannel;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::ChannelData*) == 0x8);
    // private System.Collections.Stack currentProviderData
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Stack* currentProviderData;
    // Field size check
    static_assert(sizeof(System::Collections::Stack*) == 0x8);
    // private System.String currentClientUrl
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* currentClientUrl;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String appName
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* appName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String currentXmlPath
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* currentXmlPath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean onlyDelayedChannels
    // Size: 0x1
    // Offset: 0x48
    bool onlyDelayedChannels;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ConfigHandler
    ConfigHandler(System::Collections::ArrayList* typeEntries_ = {}, System::Collections::ArrayList* channelInstances_ = {}, System::Runtime::Remoting::ChannelData* currentChannel_ = {}, System::Collections::Stack* currentProviderData_ = {}, ::Il2CppString* currentClientUrl_ = {}, ::Il2CppString* appName_ = {}, ::Il2CppString* currentXmlPath_ = {}, bool onlyDelayedChannels_ = {}) noexcept : typeEntries{typeEntries_}, channelInstances{channelInstances_}, currentChannel{currentChannel_}, currentProviderData{currentProviderData_}, currentClientUrl{currentClientUrl_}, appName{appName_}, currentXmlPath{currentXmlPath_}, onlyDelayedChannels{onlyDelayedChannels_} {}
    // Creating interface conversion operator: operator Mono::Xml::SmallXmlParser::IContentHandler
    operator Mono::Xml::SmallXmlParser::IContentHandler() noexcept {
      return *reinterpret_cast<Mono::Xml::SmallXmlParser::IContentHandler*>(this);
    }
    // Get instance field reference: private System.Collections.ArrayList typeEntries
    System::Collections::ArrayList*& dyn_typeEntries();
    // Get instance field reference: private System.Collections.ArrayList channelInstances
    System::Collections::ArrayList*& dyn_channelInstances();
    // Get instance field reference: private System.Runtime.Remoting.ChannelData currentChannel
    System::Runtime::Remoting::ChannelData*& dyn_currentChannel();
    // Get instance field reference: private System.Collections.Stack currentProviderData
    System::Collections::Stack*& dyn_currentProviderData();
    // Get instance field reference: private System.String currentClientUrl
    ::Il2CppString*& dyn_currentClientUrl();
    // Get instance field reference: private System.String appName
    ::Il2CppString*& dyn_appName();
    // Get instance field reference: private System.String currentXmlPath
    ::Il2CppString*& dyn_currentXmlPath();
    // Get instance field reference: private System.Boolean onlyDelayedChannels
    bool& dyn_onlyDelayedChannels();
    // public System.Void .ctor(System.Boolean onlyDelayedChannels)
    // Offset: 0x1491ACC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConfigHandler* New_ctor(bool onlyDelayedChannels) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::ConfigHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConfigHandler*, creationType>(onlyDelayedChannels)));
    }
    // private System.Void ValidatePath(System.String element, params System.String[] paths)
    // Offset: 0x1491B74
    void ValidatePath(::Il2CppString* element, ::Array<::Il2CppString*>* paths);
    // Creating initializer_list -> params proxy for: System.Void ValidatePath(System.String element, params System.String[] paths)
    void ValidatePath(::Il2CppString* element, std::initializer_list<::Il2CppString*> paths);
    // Creating TArgs -> initializer_list proxy for: System.Void ValidatePath(System.String element, params System.String[] paths)
    template<class ...TParams>
    void ValidatePath(::Il2CppString* element, TParams&&... paths) {
      ValidatePath(element, {paths...});
    }
    // private System.Boolean CheckPath(System.String path)
    // Offset: 0x1491C80
    bool CheckPath(::Il2CppString* path);
    // public System.Void OnStartParsing(Mono.Xml.SmallXmlParser parser)
    // Offset: 0x1491D64
    void OnStartParsing(Mono::Xml::SmallXmlParser* parser);
    // public System.Void OnProcessingInstruction(System.String name, System.String text)
    // Offset: 0x1491D68
    void OnProcessingInstruction(::Il2CppString* name, ::Il2CppString* text);
    // public System.Void OnIgnorableWhitespace(System.String s)
    // Offset: 0x1491D6C
    void OnIgnorableWhitespace(::Il2CppString* s);
    // public System.Void OnStartElement(System.String name, Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList attrs)
    // Offset: 0x1491D70
    void OnStartElement(::Il2CppString* name, Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // public System.Void ParseElement(System.String name, Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList attrs)
    // Offset: 0x1491F10
    void ParseElement(::Il2CppString* name, Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // public System.Void OnEndElement(System.String name)
    // Offset: 0x1494778
    void OnEndElement(::Il2CppString* name);
    // private System.Void ReadCustomProviderData(System.String name, Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList attrs)
    // Offset: 0x1492E5C
    void ReadCustomProviderData(::Il2CppString* name, Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // private System.Void ReadLifetine(Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList attrs)
    // Offset: 0x14931CC
    void ReadLifetine(Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // private System.TimeSpan ParseTime(System.String s)
    // Offset: 0x14947FC
    System::TimeSpan ParseTime(::Il2CppString* s);
    // private System.Void ReadChannel(Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList attrs, System.Boolean isTemplate)
    // Offset: 0x1493784
    void ReadChannel(Mono::Xml::SmallXmlParser::IAttrList* attrs, bool isTemplate);
    // private System.Runtime.Remoting.ProviderData ReadProvider(System.String name, Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList attrs, System.Boolean isTemplate)
    // Offset: 0x1493B18
    System::Runtime::Remoting::ProviderData* ReadProvider(::Il2CppString* name, Mono::Xml::SmallXmlParser::IAttrList* attrs, bool isTemplate);
    // private System.Void ReadClientActivated(Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList attrs)
    // Offset: 0x149414C
    void ReadClientActivated(Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // private System.Void ReadServiceActivated(Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList attrs)
    // Offset: 0x1494274
    void ReadServiceActivated(Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // private System.Void ReadClientWellKnown(Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList attrs)
    // Offset: 0x1493EC0
    void ReadClientWellKnown(Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // private System.Void ReadServiceWellKnown(Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList attrs)
    // Offset: 0x1493FA4
    void ReadServiceWellKnown(Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // private System.Void ReadInteropXml(Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList attrs, System.Boolean isElement)
    // Offset: 0x1494338
    void ReadInteropXml(Mono::Xml::SmallXmlParser::IAttrList* attrs, bool isElement);
    // private System.Void ReadPreload(Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList attrs)
    // Offset: 0x149450C
    void ReadPreload(Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // private System.String GetNotNull(Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList attrs, System.String name)
    // Offset: 0x1494BD0
    ::Il2CppString* GetNotNull(Mono::Xml::SmallXmlParser::IAttrList* attrs, ::Il2CppString* name);
    // private System.String ExtractAssembly(ref System.String type)
    // Offset: 0x1494D0C
    ::Il2CppString* ExtractAssembly(ByRef<::Il2CppString*> type);
    // public System.Void OnChars(System.String ch)
    // Offset: 0x1494DDC
    void OnChars(::Il2CppString* ch);
    // public System.Void OnEndParsing(Mono.Xml.SmallXmlParser parser)
    // Offset: 0x1494DE0
    void OnEndParsing(Mono::Xml::SmallXmlParser* parser);
  }; // System.Runtime.Remoting.ConfigHandler
  #pragma pack(pop)
  static check_size<sizeof(ConfigHandler), 72 + sizeof(bool)> __System_Runtime_Remoting_ConfigHandlerSizeCheck;
  static_assert(sizeof(ConfigHandler) == 0x49);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ConfigHandler*, "System.Runtime.Remoting", "ConfigHandler");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::ValidatePath
// Il2CppName: ValidatePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::Il2CppString*, ::Array<::Il2CppString*>*)>(&System::Runtime::Remoting::ConfigHandler::ValidatePath)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* paths = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "ValidatePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, paths});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::CheckPath
// Il2CppName: CheckPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::ConfigHandler::*)(::Il2CppString*)>(&System::Runtime::Remoting::ConfigHandler::CheckPath)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "CheckPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::OnStartParsing
// Il2CppName: OnStartParsing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(Mono::Xml::SmallXmlParser*)>(&System::Runtime::Remoting::ConfigHandler::OnStartParsing)> {
  static const MethodInfo* get() {
    static auto* parser = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "OnStartParsing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parser});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::OnProcessingInstruction
// Il2CppName: OnProcessingInstruction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::Il2CppString*, ::Il2CppString*)>(&System::Runtime::Remoting::ConfigHandler::OnProcessingInstruction)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "OnProcessingInstruction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, text});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::OnIgnorableWhitespace
// Il2CppName: OnIgnorableWhitespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::Il2CppString*)>(&System::Runtime::Remoting::ConfigHandler::OnIgnorableWhitespace)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "OnIgnorableWhitespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::OnStartElement
// Il2CppName: OnStartElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::Il2CppString*, Mono::Xml::SmallXmlParser::IAttrList*)>(&System::Runtime::Remoting::ConfigHandler::OnStartElement)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* attrs = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IAttrList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "OnStartElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, attrs});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::ParseElement
// Il2CppName: ParseElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::Il2CppString*, Mono::Xml::SmallXmlParser::IAttrList*)>(&System::Runtime::Remoting::ConfigHandler::ParseElement)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* attrs = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IAttrList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "ParseElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, attrs});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::OnEndElement
// Il2CppName: OnEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::Il2CppString*)>(&System::Runtime::Remoting::ConfigHandler::OnEndElement)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "OnEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::ReadCustomProviderData
// Il2CppName: ReadCustomProviderData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::Il2CppString*, Mono::Xml::SmallXmlParser::IAttrList*)>(&System::Runtime::Remoting::ConfigHandler::ReadCustomProviderData)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* attrs = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IAttrList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "ReadCustomProviderData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, attrs});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::ReadLifetine
// Il2CppName: ReadLifetine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(Mono::Xml::SmallXmlParser::IAttrList*)>(&System::Runtime::Remoting::ConfigHandler::ReadLifetine)> {
  static const MethodInfo* get() {
    static auto* attrs = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IAttrList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "ReadLifetine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attrs});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::ParseTime
// Il2CppName: ParseTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (System::Runtime::Remoting::ConfigHandler::*)(::Il2CppString*)>(&System::Runtime::Remoting::ConfigHandler::ParseTime)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "ParseTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::ReadChannel
// Il2CppName: ReadChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(Mono::Xml::SmallXmlParser::IAttrList*, bool)>(&System::Runtime::Remoting::ConfigHandler::ReadChannel)> {
  static const MethodInfo* get() {
    static auto* attrs = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IAttrList")->byval_arg;
    static auto* isTemplate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "ReadChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attrs, isTemplate});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::ReadProvider
// Il2CppName: ReadProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::ProviderData* (System::Runtime::Remoting::ConfigHandler::*)(::Il2CppString*, Mono::Xml::SmallXmlParser::IAttrList*, bool)>(&System::Runtime::Remoting::ConfigHandler::ReadProvider)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* attrs = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IAttrList")->byval_arg;
    static auto* isTemplate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "ReadProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, attrs, isTemplate});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::ReadClientActivated
// Il2CppName: ReadClientActivated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(Mono::Xml::SmallXmlParser::IAttrList*)>(&System::Runtime::Remoting::ConfigHandler::ReadClientActivated)> {
  static const MethodInfo* get() {
    static auto* attrs = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IAttrList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "ReadClientActivated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attrs});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::ReadServiceActivated
// Il2CppName: ReadServiceActivated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(Mono::Xml::SmallXmlParser::IAttrList*)>(&System::Runtime::Remoting::ConfigHandler::ReadServiceActivated)> {
  static const MethodInfo* get() {
    static auto* attrs = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IAttrList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "ReadServiceActivated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attrs});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::ReadClientWellKnown
// Il2CppName: ReadClientWellKnown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(Mono::Xml::SmallXmlParser::IAttrList*)>(&System::Runtime::Remoting::ConfigHandler::ReadClientWellKnown)> {
  static const MethodInfo* get() {
    static auto* attrs = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IAttrList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "ReadClientWellKnown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attrs});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::ReadServiceWellKnown
// Il2CppName: ReadServiceWellKnown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(Mono::Xml::SmallXmlParser::IAttrList*)>(&System::Runtime::Remoting::ConfigHandler::ReadServiceWellKnown)> {
  static const MethodInfo* get() {
    static auto* attrs = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IAttrList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "ReadServiceWellKnown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attrs});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::ReadInteropXml
// Il2CppName: ReadInteropXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(Mono::Xml::SmallXmlParser::IAttrList*, bool)>(&System::Runtime::Remoting::ConfigHandler::ReadInteropXml)> {
  static const MethodInfo* get() {
    static auto* attrs = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IAttrList")->byval_arg;
    static auto* isElement = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "ReadInteropXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attrs, isElement});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::ReadPreload
// Il2CppName: ReadPreload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(Mono::Xml::SmallXmlParser::IAttrList*)>(&System::Runtime::Remoting::ConfigHandler::ReadPreload)> {
  static const MethodInfo* get() {
    static auto* attrs = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IAttrList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "ReadPreload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attrs});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::GetNotNull
// Il2CppName: GetNotNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Remoting::ConfigHandler::*)(Mono::Xml::SmallXmlParser::IAttrList*, ::Il2CppString*)>(&System::Runtime::Remoting::ConfigHandler::GetNotNull)> {
  static const MethodInfo* get() {
    static auto* attrs = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IAttrList")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "GetNotNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attrs, name});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::ExtractAssembly
// Il2CppName: ExtractAssembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Remoting::ConfigHandler::*)(ByRef<::Il2CppString*>)>(&System::Runtime::Remoting::ConfigHandler::ExtractAssembly)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "ExtractAssembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::OnChars
// Il2CppName: OnChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::Il2CppString*)>(&System::Runtime::Remoting::ConfigHandler::OnChars)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "OnChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ConfigHandler::OnEndParsing
// Il2CppName: OnEndParsing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(Mono::Xml::SmallXmlParser*)>(&System::Runtime::Remoting::ConfigHandler::OnEndParsing)> {
  static const MethodInfo* get() {
    static auto* parser = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ConfigHandler*), "OnEndParsing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parser});
  }
};
