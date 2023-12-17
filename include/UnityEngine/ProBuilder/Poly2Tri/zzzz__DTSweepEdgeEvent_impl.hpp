#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DTSweepEdgeEvent_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DTSweepConstraint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b344a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::__set_ConstrainedEdge(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, 0x10>(this, std::forward<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>(value));
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::__get_ConstrainedEdge()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*> UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::__get_ConstrainedEdge() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, 0x10>(this);
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::__set_Right(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::__get_Right()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::__get_Right() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent* UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent*>());
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
