#pragma once
#include "GlobalNamespace/zzzz__PS5ActivityDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__ProgressActivitySO_def.hpp"
#include "GlobalNamespace/zzzz__ProgressActivitySubtaskSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProgressActivitySO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ProgressActivitySO::*)()>(&::GlobalNamespace::ProgressActivitySO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2368278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProgressActivitySO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ProgressActivitySO::__set_subtasks(::ArrayW<::GlobalNamespace::ProgressActivitySubtaskSO*,::Array<::GlobalNamespace::ProgressActivitySubtaskSO*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::ProgressActivitySubtaskSO*,::Array<::GlobalNamespace::ProgressActivitySubtaskSO*>*>, 0x20>(this, std::forward<::ArrayW<::GlobalNamespace::ProgressActivitySubtaskSO*,::Array<::GlobalNamespace::ProgressActivitySubtaskSO*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::ProgressActivitySubtaskSO*,::Array<::GlobalNamespace::ProgressActivitySubtaskSO*>*>& GlobalNamespace::ProgressActivitySO::__get_subtasks()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::ProgressActivitySubtaskSO*,::Array<::GlobalNamespace::ProgressActivitySubtaskSO*>*>, 0x20>(this);
}
constexpr ::ArrayW<::GlobalNamespace::ProgressActivitySubtaskSO*,::Array<::GlobalNamespace::ProgressActivitySubtaskSO*>*> const& GlobalNamespace::ProgressActivitySO::__get_subtasks() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::ProgressActivitySubtaskSO*,::Array<::GlobalNamespace::ProgressActivitySubtaskSO*>*>, 0x20>(this);
}
inline ::GlobalNamespace::ProgressActivitySO* GlobalNamespace::ProgressActivitySO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ProgressActivitySO*>());
}
inline void GlobalNamespace::ProgressActivitySO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProgressActivitySO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
