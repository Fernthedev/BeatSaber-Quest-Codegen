#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "RootMotion/FinalIK/zzzz__BipedIKSolvers_def.hpp"
#include "RootMotion/FinalIK/zzzz__Constraints_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverFABRIK_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverLookAt_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverAim_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverLimb_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "RootMotion/zzzz__BipedReferences_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::BipedIKSolvers.get_limbs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::RootMotion::FinalIK::IKSolverLimb*,::Array<::RootMotion::FinalIK::IKSolverLimb*>*> (::RootMotion::FinalIK::BipedIKSolvers::*)()>(&::RootMotion::FinalIK::BipedIKSolvers::get_limbs)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1241930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BipedIKSolvers*>::get(),
                            "get_limbs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::BipedIKSolvers.get_ikSolvers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::RootMotion::FinalIK::IKSolver*,::Array<::RootMotion::FinalIK::IKSolver*>*> (::RootMotion::FinalIK::BipedIKSolvers::*)()>(&::RootMotion::FinalIK::BipedIKSolvers::get_ikSolvers)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x12424d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BipedIKSolvers*>::get(),
                            "get_ikSolvers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::BipedIKSolvers.AssignReferences
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::BipedIKSolvers::*)(::RootMotion::BipedReferences*)>(&::RootMotion::FinalIK::BipedIKSolvers::AssignReferences)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1241cac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BipedIKSolvers*>::get(),
                            "AssignReferences",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::BipedIKSolvers._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::BipedIKSolvers::*)()>(&::RootMotion::FinalIK::BipedIKSolvers::_ctor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x1242344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BipedIKSolvers*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::BipedIKSolvers::__set_leftFoot(::RootMotion::FinalIK::IKSolverLimb*  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::IKSolverLimb*, 0x10>(this, std::forward<::RootMotion::FinalIK::IKSolverLimb*>(value));
}
constexpr ::RootMotion::FinalIK::IKSolverLimb* RootMotion::FinalIK::BipedIKSolvers::__get_leftFoot()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::IKSolverLimb*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverLimb*> RootMotion::FinalIK::BipedIKSolvers::__get_leftFoot() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::IKSolverLimb*, 0x10>(this);
}
constexpr void RootMotion::FinalIK::BipedIKSolvers::__set_rightFoot(::RootMotion::FinalIK::IKSolverLimb*  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::IKSolverLimb*, 0x18>(this, std::forward<::RootMotion::FinalIK::IKSolverLimb*>(value));
}
constexpr ::RootMotion::FinalIK::IKSolverLimb* RootMotion::FinalIK::BipedIKSolvers::__get_rightFoot()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::IKSolverLimb*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverLimb*> RootMotion::FinalIK::BipedIKSolvers::__get_rightFoot() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::IKSolverLimb*, 0x18>(this);
}
constexpr void RootMotion::FinalIK::BipedIKSolvers::__set_leftHand(::RootMotion::FinalIK::IKSolverLimb*  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::IKSolverLimb*, 0x20>(this, std::forward<::RootMotion::FinalIK::IKSolverLimb*>(value));
}
constexpr ::RootMotion::FinalIK::IKSolverLimb* RootMotion::FinalIK::BipedIKSolvers::__get_leftHand()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::IKSolverLimb*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverLimb*> RootMotion::FinalIK::BipedIKSolvers::__get_leftHand() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::IKSolverLimb*, 0x20>(this);
}
constexpr void RootMotion::FinalIK::BipedIKSolvers::__set_rightHand(::RootMotion::FinalIK::IKSolverLimb*  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::IKSolverLimb*, 0x28>(this, std::forward<::RootMotion::FinalIK::IKSolverLimb*>(value));
}
constexpr ::RootMotion::FinalIK::IKSolverLimb* RootMotion::FinalIK::BipedIKSolvers::__get_rightHand()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::IKSolverLimb*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverLimb*> RootMotion::FinalIK::BipedIKSolvers::__get_rightHand() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::IKSolverLimb*, 0x28>(this);
}
constexpr void RootMotion::FinalIK::BipedIKSolvers::__set_spine(::RootMotion::FinalIK::IKSolverFABRIK*  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::IKSolverFABRIK*, 0x30>(this, std::forward<::RootMotion::FinalIK::IKSolverFABRIK*>(value));
}
constexpr ::RootMotion::FinalIK::IKSolverFABRIK* RootMotion::FinalIK::BipedIKSolvers::__get_spine()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::IKSolverFABRIK*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverFABRIK*> RootMotion::FinalIK::BipedIKSolvers::__get_spine() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::IKSolverFABRIK*, 0x30>(this);
}
constexpr void RootMotion::FinalIK::BipedIKSolvers::__set_lookAt(::RootMotion::FinalIK::IKSolverLookAt*  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::IKSolverLookAt*, 0x38>(this, std::forward<::RootMotion::FinalIK::IKSolverLookAt*>(value));
}
constexpr ::RootMotion::FinalIK::IKSolverLookAt* RootMotion::FinalIK::BipedIKSolvers::__get_lookAt()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::IKSolverLookAt*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverLookAt*> RootMotion::FinalIK::BipedIKSolvers::__get_lookAt() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::IKSolverLookAt*, 0x38>(this);
}
constexpr void RootMotion::FinalIK::BipedIKSolvers::__set_aim(::RootMotion::FinalIK::IKSolverAim*  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::IKSolverAim*, 0x40>(this, std::forward<::RootMotion::FinalIK::IKSolverAim*>(value));
}
constexpr ::RootMotion::FinalIK::IKSolverAim* RootMotion::FinalIK::BipedIKSolvers::__get_aim()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::IKSolverAim*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverAim*> RootMotion::FinalIK::BipedIKSolvers::__get_aim() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::IKSolverAim*, 0x40>(this);
}
constexpr void RootMotion::FinalIK::BipedIKSolvers::__set_pelvis(::RootMotion::FinalIK::Constraints*  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::Constraints*, 0x48>(this, std::forward<::RootMotion::FinalIK::Constraints*>(value));
}
constexpr ::RootMotion::FinalIK::Constraints* RootMotion::FinalIK::BipedIKSolvers::__get_pelvis()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::Constraints*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::Constraints*> RootMotion::FinalIK::BipedIKSolvers::__get_pelvis() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::Constraints*, 0x48>(this);
}
constexpr void RootMotion::FinalIK::BipedIKSolvers::__set__limbs(::ArrayW<::RootMotion::FinalIK::IKSolverLimb*,::Array<::RootMotion::FinalIK::IKSolverLimb*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::IKSolverLimb*,::Array<::RootMotion::FinalIK::IKSolverLimb*>*>, 0x50>(this, std::forward<::ArrayW<::RootMotion::FinalIK::IKSolverLimb*,::Array<::RootMotion::FinalIK::IKSolverLimb*>*>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::IKSolverLimb*,::Array<::RootMotion::FinalIK::IKSolverLimb*>*>& RootMotion::FinalIK::BipedIKSolvers::__get__limbs()  {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::IKSolverLimb*,::Array<::RootMotion::FinalIK::IKSolverLimb*>*>, 0x50>(this);
}
constexpr ::ArrayW<::RootMotion::FinalIK::IKSolverLimb*,::Array<::RootMotion::FinalIK::IKSolverLimb*>*> const& RootMotion::FinalIK::BipedIKSolvers::__get__limbs() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::IKSolverLimb*,::Array<::RootMotion::FinalIK::IKSolverLimb*>*>, 0x50>(this);
}
constexpr void RootMotion::FinalIK::BipedIKSolvers::__set__ikSolvers(::ArrayW<::RootMotion::FinalIK::IKSolver*,::Array<::RootMotion::FinalIK::IKSolver*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::IKSolver*,::Array<::RootMotion::FinalIK::IKSolver*>*>, 0x58>(this, std::forward<::ArrayW<::RootMotion::FinalIK::IKSolver*,::Array<::RootMotion::FinalIK::IKSolver*>*>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::IKSolver*,::Array<::RootMotion::FinalIK::IKSolver*>*>& RootMotion::FinalIK::BipedIKSolvers::__get__ikSolvers()  {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::IKSolver*,::Array<::RootMotion::FinalIK::IKSolver*>*>, 0x58>(this);
}
constexpr ::ArrayW<::RootMotion::FinalIK::IKSolver*,::Array<::RootMotion::FinalIK::IKSolver*>*> const& RootMotion::FinalIK::BipedIKSolvers::__get__ikSolvers() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::IKSolver*,::Array<::RootMotion::FinalIK::IKSolver*>*>, 0x58>(this);
}
inline ::ArrayW<::RootMotion::FinalIK::IKSolverLimb*,::Array<::RootMotion::FinalIK::IKSolverLimb*>*> RootMotion::FinalIK::BipedIKSolvers::get_limbs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BipedIKSolvers*>::get(),
                            "get_limbs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::RootMotion::FinalIK::IKSolverLimb*,::Array<::RootMotion::FinalIK::IKSolverLimb*>*>, false>(*this, ___internal_method);
}
inline ::ArrayW<::RootMotion::FinalIK::IKSolver*,::Array<::RootMotion::FinalIK::IKSolver*>*> RootMotion::FinalIK::BipedIKSolvers::get_ikSolvers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BipedIKSolvers*>::get(),
                            "get_ikSolvers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::RootMotion::FinalIK::IKSolver*,::Array<::RootMotion::FinalIK::IKSolver*>*>, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::BipedIKSolvers::AssignReferences(::RootMotion::BipedReferences*  references)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BipedIKSolvers*>::get(),
                            "AssignReferences",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, references);
}
inline ::RootMotion::FinalIK::BipedIKSolvers* RootMotion::FinalIK::BipedIKSolvers::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::BipedIKSolvers*>());
}
inline void RootMotion::FinalIK::BipedIKSolvers::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BipedIKSolvers*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
