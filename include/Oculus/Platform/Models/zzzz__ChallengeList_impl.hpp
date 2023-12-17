#pragma once
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_impl.hpp"
#include "Oculus/Platform/Models/zzzz__ChallengeList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::ChallengeList._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::ChallengeList::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::ChallengeList::_ctor)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x270555c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::ChallengeList*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::ChallengeList::__set_TotalCount(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x28>(this, std::forward<uint64_t>(value));
}
constexpr uint64_t& Oculus::Platform::Models::ChallengeList::__get_TotalCount()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x28>(this);
}
constexpr uint64_t const& Oculus::Platform::Models::ChallengeList::__get_TotalCount() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x28>(this);
}
inline ::Oculus::Platform::Models::ChallengeList* Oculus::Platform::Models::ChallengeList::New_ctor(::cordl_internals::intptr_t  a)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::ChallengeList*>(a));
}
inline void Oculus::Platform::Models::ChallengeList::_ctor(::cordl_internals::intptr_t  a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::ChallengeList*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, a);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
