#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Collections/zzzz__SortedList_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventArgs_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaCompilationSettings_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventHandler_def.hpp"
#include "System/Xml/zzzz__XmlReaderSettings_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaInfo_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaSet::*)()>(&::System::Xml::Schema::XmlSchemaSet::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x28c8db0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSet*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaSet::*)(::System::Xml::XmlNameTable*)>(&::System::Xml::Schema::XmlSchemaSet::_ctor)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x28c8e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSet*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.InternalValidationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaSet::*)(::System::Object*, ::System::Xml::Schema::ValidationEventArgs*)>(&::System::Xml::Schema::XmlSchemaSet::InternalValidationCallback)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x28c909c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSet*>::get(),
                            "InternalValidationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ValidationEventArgs*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::Schema::XmlSchemaSet::__set_nameTable(::System::Xml::XmlNameTable*  value)  {
::cordl_internals::setInstanceField<::System::Xml::XmlNameTable*, 0x10>(this, std::forward<::System::Xml::XmlNameTable*>(value));
}
constexpr ::System::Xml::XmlNameTable* System::Xml::Schema::XmlSchemaSet::__get_nameTable()  {
return ::cordl_internals::getInstanceField<::System::Xml::XmlNameTable*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> System::Xml::Schema::XmlSchemaSet::__get_nameTable() const {
return ::cordl_internals::getInstanceField<::System::Xml::XmlNameTable*, 0x10>(this);
}
constexpr void System::Xml::Schema::XmlSchemaSet::__set_schemas(::System::Collections::SortedList*  value)  {
::cordl_internals::setInstanceField<::System::Collections::SortedList*, 0x18>(this, std::forward<::System::Collections::SortedList*>(value));
}
constexpr ::System::Collections::SortedList* System::Xml::Schema::XmlSchemaSet::__get_schemas()  {
return ::cordl_internals::getInstanceField<::System::Collections::SortedList*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::SortedList*> System::Xml::Schema::XmlSchemaSet::__get_schemas() const {
return ::cordl_internals::getInstanceField<::System::Collections::SortedList*, 0x18>(this);
}
constexpr void System::Xml::Schema::XmlSchemaSet::__set_internalEventHandler(::System::Xml::Schema::ValidationEventHandler*  value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::ValidationEventHandler*, 0x20>(this, std::forward<::System::Xml::Schema::ValidationEventHandler*>(value));
}
constexpr ::System::Xml::Schema::ValidationEventHandler* System::Xml::Schema::XmlSchemaSet::__get_internalEventHandler()  {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::ValidationEventHandler*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::ValidationEventHandler*> System::Xml::Schema::XmlSchemaSet::__get_internalEventHandler() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::ValidationEventHandler*, 0x20>(this);
}
constexpr void System::Xml::Schema::XmlSchemaSet::__set_eventHandler(::System::Xml::Schema::ValidationEventHandler*  value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::ValidationEventHandler*, 0x28>(this, std::forward<::System::Xml::Schema::ValidationEventHandler*>(value));
}
constexpr ::System::Xml::Schema::ValidationEventHandler* System::Xml::Schema::XmlSchemaSet::__get_eventHandler()  {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::ValidationEventHandler*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::ValidationEventHandler*> System::Xml::Schema::XmlSchemaSet::__get_eventHandler() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::ValidationEventHandler*, 0x28>(this);
}
constexpr void System::Xml::Schema::XmlSchemaSet::__set_schemaLocations(::System::Collections::Hashtable*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Hashtable*, 0x30>(this, std::forward<::System::Collections::Hashtable*>(value));
}
constexpr ::System::Collections::Hashtable* System::Xml::Schema::XmlSchemaSet::__get_schemaLocations()  {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> System::Xml::Schema::XmlSchemaSet::__get_schemaLocations() const {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable*, 0x30>(this);
}
constexpr void System::Xml::Schema::XmlSchemaSet::__set_chameleonSchemas(::System::Collections::Hashtable*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Hashtable*, 0x38>(this, std::forward<::System::Collections::Hashtable*>(value));
}
constexpr ::System::Collections::Hashtable* System::Xml::Schema::XmlSchemaSet::__get_chameleonSchemas()  {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> System::Xml::Schema::XmlSchemaSet::__get_chameleonSchemas() const {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable*, 0x38>(this);
}
constexpr void System::Xml::Schema::XmlSchemaSet::__set_targetNamespaces(::System::Collections::Hashtable*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Hashtable*, 0x40>(this, std::forward<::System::Collections::Hashtable*>(value));
}
constexpr ::System::Collections::Hashtable* System::Xml::Schema::XmlSchemaSet::__get_targetNamespaces()  {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> System::Xml::Schema::XmlSchemaSet::__get_targetNamespaces() const {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable*, 0x40>(this);
}
constexpr void System::Xml::Schema::XmlSchemaSet::__set_compileAll(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this, std::forward<bool>(value));
}
constexpr bool& System::Xml::Schema::XmlSchemaSet::__get_compileAll()  {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
constexpr bool const& System::Xml::Schema::XmlSchemaSet::__get_compileAll() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
constexpr void System::Xml::Schema::XmlSchemaSet::__set_cachedCompiledInfo(::System::Xml::Schema::SchemaInfo*  value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::SchemaInfo*, 0x50>(this, std::forward<::System::Xml::Schema::SchemaInfo*>(value));
}
constexpr ::System::Xml::Schema::SchemaInfo* System::Xml::Schema::XmlSchemaSet::__get_cachedCompiledInfo()  {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::SchemaInfo*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SchemaInfo*> System::Xml::Schema::XmlSchemaSet::__get_cachedCompiledInfo() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::SchemaInfo*, 0x50>(this);
}
constexpr void System::Xml::Schema::XmlSchemaSet::__set_readerSettings(::System::Xml::XmlReaderSettings*  value)  {
::cordl_internals::setInstanceField<::System::Xml::XmlReaderSettings*, 0x58>(this, std::forward<::System::Xml::XmlReaderSettings*>(value));
}
constexpr ::System::Xml::XmlReaderSettings* System::Xml::Schema::XmlSchemaSet::__get_readerSettings()  {
return ::cordl_internals::getInstanceField<::System::Xml::XmlReaderSettings*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlReaderSettings*> System::Xml::Schema::XmlSchemaSet::__get_readerSettings() const {
return ::cordl_internals::getInstanceField<::System::Xml::XmlReaderSettings*, 0x58>(this);
}
constexpr void System::Xml::Schema::XmlSchemaSet::__set_compilationSettings(::System::Xml::Schema::XmlSchemaCompilationSettings*  value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::XmlSchemaCompilationSettings*, 0x60>(this, std::forward<::System::Xml::Schema::XmlSchemaCompilationSettings*>(value));
}
constexpr ::System::Xml::Schema::XmlSchemaCompilationSettings* System::Xml::Schema::XmlSchemaSet::__get_compilationSettings()  {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::XmlSchemaCompilationSettings*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaCompilationSettings*> System::Xml::Schema::XmlSchemaSet::__get_compilationSettings() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::XmlSchemaCompilationSettings*, 0x60>(this);
}
inline ::System::Xml::Schema::XmlSchemaSet* System::Xml::Schema::XmlSchemaSet::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::XmlSchemaSet*>());
}
inline void System::Xml::Schema::XmlSchemaSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSet*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaSet* System::Xml::Schema::XmlSchemaSet::New_ctor(::System::Xml::XmlNameTable*  nameTable)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::XmlSchemaSet*>(nameTable));
}
inline void System::Xml::Schema::XmlSchemaSet::_ctor(::System::Xml::XmlNameTable*  nameTable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSet*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, nameTable);
}
inline void System::Xml::Schema::XmlSchemaSet::InternalValidationCallback(::System::Object*  sender, ::System::Xml::Schema::ValidationEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSet*>::get(),
                            "InternalValidationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ValidationEventArgs*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sender, e);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
