#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryAssemblyInfo_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::*)(::StringW)>(&::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24c1964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::*)(::StringW, ::System::Reflection::Assembly*)>(&::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24c198c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo.GetAssembly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::*)()>(&::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::GetAssembly)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x24c19b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>::get(),
                            "GetAssembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::__set_assemblyString(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::__get_assemblyString()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::__get_assemblyString() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::__set_assembly(::System::Reflection::Assembly*  value)  {
::cordl_internals::setInstanceField<::System::Reflection::Assembly*, 0x18>(this, std::forward<::System::Reflection::Assembly*>(value));
}
constexpr ::System::Reflection::Assembly* System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::__get_assembly()  {
return ::cordl_internals::getInstanceField<::System::Reflection::Assembly*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::Assembly*> System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::__get_assembly() const {
return ::cordl_internals::getInstanceField<::System::Reflection::Assembly*, 0x18>(this);
}
inline ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::New_ctor(::StringW  assemblyString)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>(assemblyString));
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::_ctor(::StringW  assemblyString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, assemblyString);
}
inline ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::New_ctor(::StringW  assemblyString, ::System::Reflection::Assembly*  assembly)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>(assemblyString, assembly));
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::_ctor(::StringW  assemblyString, ::System::Reflection::Assembly*  assembly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, assemblyString, assembly);
}
inline ::System::Reflection::Assembly* System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::GetAssembly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>::get(),
                            "GetAssembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
