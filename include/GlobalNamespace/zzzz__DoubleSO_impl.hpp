#pragma once
#include "GlobalNamespace/zzzz__ObservableVariableSO_1_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__DoubleSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DoubleSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DoubleSO::*)()>(&::GlobalNamespace::DoubleSO::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1f83d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DoubleSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::GlobalNamespace::DoubleSO::DoubleSO()  : ::GlobalNamespace::ObservableVariableSO_1<double_t>(THROW_UNLESS(::il2cpp_utils::New<DoubleSO>())) {}
 void ::GlobalNamespace::DoubleSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DoubleSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
