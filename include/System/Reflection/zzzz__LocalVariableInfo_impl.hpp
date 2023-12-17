#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/zzzz__LocalVariableInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::LocalVariableInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::LocalVariableInfo::*)()>(&::System::Reflection::LocalVariableInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f1cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::LocalVariableInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::LocalVariableInfo.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::LocalVariableInfo::*)()>(&::System::Reflection::LocalVariableInfo::ToString)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x24f1cd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::LocalVariableInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::LocalVariableInfo*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void System::Reflection::LocalVariableInfo::__set_type(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x10>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* System::Reflection::LocalVariableInfo::__get_type()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> System::Reflection::LocalVariableInfo::__get_type() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x10>(this);
}
constexpr void System::Reflection::LocalVariableInfo::__set_is_pinned(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& System::Reflection::LocalVariableInfo::__get_is_pinned()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& System::Reflection::LocalVariableInfo::__get_is_pinned() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr void System::Reflection::LocalVariableInfo::__set_position(uint16_t  value)  {
::cordl_internals::setInstanceField<uint16_t, 0x1a>(this, std::forward<uint16_t>(value));
}
constexpr uint16_t& System::Reflection::LocalVariableInfo::__get_position()  {
return ::cordl_internals::getInstanceField<uint16_t, 0x1a>(this);
}
constexpr uint16_t const& System::Reflection::LocalVariableInfo::__get_position() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x1a>(this);
}
inline ::System::Reflection::LocalVariableInfo* System::Reflection::LocalVariableInfo::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Reflection::LocalVariableInfo*>());
}
inline void System::Reflection::LocalVariableInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::LocalVariableInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::StringW System::Reflection::LocalVariableInfo::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::LocalVariableInfo*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
