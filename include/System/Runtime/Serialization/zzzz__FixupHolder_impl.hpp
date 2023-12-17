#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__FixupHolder_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::FixupHolder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::FixupHolder::*)(int64_t, ::System::Object*, int32_t)>(&::System::Runtime::Serialization::FixupHolder::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x24bc15c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FixupHolder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Serialization::FixupHolder::__set_m_id(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Runtime::Serialization::FixupHolder::__get_m_id()  {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this);
}
constexpr int64_t const& System::Runtime::Serialization::FixupHolder::__get_m_id() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this);
}
constexpr void System::Runtime::Serialization::FixupHolder::__set_m_fixupInfo(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Runtime::Serialization::FixupHolder::__get_m_fixupInfo()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Runtime::Serialization::FixupHolder::__get_m_fixupInfo() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void System::Runtime::Serialization::FixupHolder::__set_m_fixupType(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Runtime::Serialization::FixupHolder::__get_m_fixupType()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& System::Runtime::Serialization::FixupHolder::__get_m_fixupType() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
inline ::System::Runtime::Serialization::FixupHolder* System::Runtime::Serialization::FixupHolder::New_ctor(int64_t  id, ::System::Object*  fixupInfo, int32_t  fixupType)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::FixupHolder*>(id, fixupInfo, fixupType));
}
inline void System::Runtime::Serialization::FixupHolder::_ctor(int64_t  id, ::System::Object*  fixupInfo, int32_t  fixupType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FixupHolder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, id, fixupInfo, fixupType);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
