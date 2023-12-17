#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__SupplementaryMetric_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::SupplementaryMetric._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::SupplementaryMetric::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::SupplementaryMetric::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2706c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::SupplementaryMetric*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::SupplementaryMetric::__set__cordl_ID(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this, std::forward<uint64_t>(value));
}
constexpr uint64_t& Oculus::Platform::Models::SupplementaryMetric::__get__cordl_ID()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this);
}
constexpr uint64_t const& Oculus::Platform::Models::SupplementaryMetric::__get__cordl_ID() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this);
}
constexpr void Oculus::Platform::Models::SupplementaryMetric::__set_Metric(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x18>(this, std::forward<int64_t>(value));
}
constexpr int64_t& Oculus::Platform::Models::SupplementaryMetric::__get_Metric()  {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this);
}
constexpr int64_t const& Oculus::Platform::Models::SupplementaryMetric::__get_Metric() const {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this);
}
inline ::Oculus::Platform::Models::SupplementaryMetric* Oculus::Platform::Models::SupplementaryMetric::New_ctor(::cordl_internals::intptr_t  o)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::SupplementaryMetric*>(o));
}
inline void Oculus::Platform::Models::SupplementaryMetric::_ctor(::cordl_internals::intptr_t  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::SupplementaryMetric*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
