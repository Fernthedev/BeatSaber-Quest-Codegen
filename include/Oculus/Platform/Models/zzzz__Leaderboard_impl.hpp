#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__Leaderboard_def.hpp"
#include "Oculus/Platform/Models/zzzz__Destination_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::Leaderboard._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::Leaderboard::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::Leaderboard::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2705434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Leaderboard*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::Leaderboard::__set_ApiName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::Leaderboard::__get_ApiName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::Leaderboard::__get_ApiName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void Oculus::Platform::Models::Leaderboard::__set_DestinationOptional(::Oculus::Platform::Models::Destination*  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::Destination*, 0x18>(this, std::forward<::Oculus::Platform::Models::Destination*>(value));
}
constexpr ::Oculus::Platform::Models::Destination* Oculus::Platform::Models::Leaderboard::__get_DestinationOptional()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::Destination*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::Destination*> Oculus::Platform::Models::Leaderboard::__get_DestinationOptional() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::Destination*, 0x18>(this);
}
constexpr void Oculus::Platform::Models::Leaderboard::__set_Destination(::Oculus::Platform::Models::Destination*  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::Destination*, 0x20>(this, std::forward<::Oculus::Platform::Models::Destination*>(value));
}
constexpr ::Oculus::Platform::Models::Destination* Oculus::Platform::Models::Leaderboard::__get_Destination()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::Destination*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::Destination*> Oculus::Platform::Models::Leaderboard::__get_Destination() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::Destination*, 0x20>(this);
}
constexpr void Oculus::Platform::Models::Leaderboard::__set__cordl_ID(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x28>(this, std::forward<uint64_t>(value));
}
constexpr uint64_t& Oculus::Platform::Models::Leaderboard::__get__cordl_ID()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x28>(this);
}
constexpr uint64_t const& Oculus::Platform::Models::Leaderboard::__get__cordl_ID() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x28>(this);
}
inline ::Oculus::Platform::Models::Leaderboard* Oculus::Platform::Models::Leaderboard::New_ctor(::cordl_internals::intptr_t  o)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::Leaderboard*>(o));
}
inline void Oculus::Platform::Models::Leaderboard::_ctor(::cordl_internals::intptr_t  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Leaderboard*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
