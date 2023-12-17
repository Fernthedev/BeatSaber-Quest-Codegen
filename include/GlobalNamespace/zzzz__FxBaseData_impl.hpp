#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FxBaseData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FxBaseData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FxBaseData::*)(float_t, bool)>(&::GlobalNamespace::FxBaseData::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x233aeb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FxBaseData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::FxBaseData::__set_beat(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FxBaseData::__get_beat()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& GlobalNamespace::FxBaseData::__get_beat() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr void GlobalNamespace::FxBaseData::__set_usePreviousEventValue(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x14>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::FxBaseData::__get_usePreviousEventValue()  {
return ::cordl_internals::getInstanceField<bool, 0x14>(this);
}
constexpr bool const& GlobalNamespace::FxBaseData::__get_usePreviousEventValue() const {
return ::cordl_internals::getInstanceField<bool, 0x14>(this);
}
inline ::GlobalNamespace::FxBaseData* GlobalNamespace::FxBaseData::New_ctor(float_t  beat, bool  usePreviousEventValue)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FxBaseData*>(beat, usePreviousEventValue));
}
inline void GlobalNamespace::FxBaseData::_ctor(float_t  beat, bool  usePreviousEventValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FxBaseData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beat, usePreviousEventValue);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
