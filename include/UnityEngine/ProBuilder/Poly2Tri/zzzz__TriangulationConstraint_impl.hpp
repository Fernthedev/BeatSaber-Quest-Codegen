#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationConstraint_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b3438c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::__set_P(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, 0x10>(this, std::forward<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(value));
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::__get_P()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::__get_P() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, 0x10>(this);
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::__set_Q(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, 0x18>(this, std::forward<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(value));
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::__get_Q()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::__get_Q() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, 0x18>(this);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint* UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint*>());
}
inline void UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
