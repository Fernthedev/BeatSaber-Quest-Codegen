#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingVideoStats_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LivestreamingVideoStats._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::LivestreamingVideoStats::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::LivestreamingVideoStats::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x27073cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LivestreamingVideoStats*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::LivestreamingVideoStats::__set_CommentCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Oculus::Platform::Models::LivestreamingVideoStats::__get_CommentCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& Oculus::Platform::Models::LivestreamingVideoStats::__get_CommentCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void Oculus::Platform::Models::LivestreamingVideoStats::__set_ReactionCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Oculus::Platform::Models::LivestreamingVideoStats::__get_ReactionCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& Oculus::Platform::Models::LivestreamingVideoStats::__get_ReactionCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void Oculus::Platform::Models::LivestreamingVideoStats::__set_TotalViews(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::LivestreamingVideoStats::__get_TotalViews()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::LivestreamingVideoStats::__get_TotalViews() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
inline ::Oculus::Platform::Models::LivestreamingVideoStats* Oculus::Platform::Models::LivestreamingVideoStats::New_ctor(::cordl_internals::intptr_t  o)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::LivestreamingVideoStats*>(o));
}
inline void Oculus::Platform::Models::LivestreamingVideoStats::_ctor(::cordl_internals::intptr_t  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LivestreamingVideoStats*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
