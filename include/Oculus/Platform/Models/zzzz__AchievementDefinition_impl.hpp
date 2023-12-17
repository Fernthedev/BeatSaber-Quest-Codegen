#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementDefinition_def.hpp"
#include "Oculus/Platform/zzzz__AchievementType_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::AchievementDefinition._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::AchievementDefinition::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::AchievementDefinition::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2703740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AchievementDefinition*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::AchievementDefinition::__set_Type(::Oculus::Platform::AchievementType  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::AchievementType, 0x10>(this, std::forward<::Oculus::Platform::AchievementType>(value));
}
constexpr ::Oculus::Platform::AchievementType& Oculus::Platform::Models::AchievementDefinition::__get_Type()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::AchievementType, 0x10>(this);
}
constexpr ::Oculus::Platform::AchievementType const& Oculus::Platform::Models::AchievementDefinition::__get_Type() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::AchievementType, 0x10>(this);
}
constexpr void Oculus::Platform::Models::AchievementDefinition::__set_Name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::AchievementDefinition::__get_Name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::AchievementDefinition::__get_Name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void Oculus::Platform::Models::AchievementDefinition::__set_BitfieldLength(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x20>(this, std::forward<uint32_t>(value));
}
constexpr uint32_t& Oculus::Platform::Models::AchievementDefinition::__get_BitfieldLength()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x20>(this);
}
constexpr uint32_t const& Oculus::Platform::Models::AchievementDefinition::__get_BitfieldLength() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x20>(this);
}
constexpr void Oculus::Platform::Models::AchievementDefinition::__set_Target(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x28>(this, std::forward<uint64_t>(value));
}
constexpr uint64_t& Oculus::Platform::Models::AchievementDefinition::__get_Target()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x28>(this);
}
constexpr uint64_t const& Oculus::Platform::Models::AchievementDefinition::__get_Target() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x28>(this);
}
inline ::Oculus::Platform::Models::AchievementDefinition* Oculus::Platform::Models::AchievementDefinition::New_ctor(::cordl_internals::intptr_t  o)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::AchievementDefinition*>(o));
}
inline void Oculus::Platform::Models::AchievementDefinition::_ctor(::cordl_internals::intptr_t  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AchievementDefinition*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
