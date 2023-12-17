#pragma once
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_impl.hpp"
#include "GlobalNamespace/zzzz__BurstSliderNoteDisappearingArrowController_def.hpp"
#include "GlobalNamespace/zzzz__BurstSliderGameNoteController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BurstSliderNoteDisappearingArrowController.get_gameNoteController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BurstSliderGameNoteController* (::GlobalNamespace::BurstSliderNoteDisappearingArrowController::*)()>(&::GlobalNamespace::BurstSliderNoteDisappearingArrowController::get_gameNoteController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2384ba4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderNoteDisappearingArrowController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderNoteDisappearingArrowController*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderNoteDisappearingArrowController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BurstSliderNoteDisappearingArrowController::*)()>(&::GlobalNamespace::BurstSliderNoteDisappearingArrowController::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2384bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderNoteDisappearingArrowController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BurstSliderNoteDisappearingArrowController::__set__burstSliderNoteController(::GlobalNamespace::BurstSliderGameNoteController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BurstSliderGameNoteController*, 0x50>(this, std::forward<::GlobalNamespace::BurstSliderGameNoteController*>(value));
}
constexpr ::GlobalNamespace::BurstSliderGameNoteController* GlobalNamespace::BurstSliderNoteDisappearingArrowController::__get__burstSliderNoteController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BurstSliderGameNoteController*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BurstSliderGameNoteController*> GlobalNamespace::BurstSliderNoteDisappearingArrowController::__get__burstSliderNoteController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BurstSliderGameNoteController*, 0x50>(this);
}
inline ::GlobalNamespace::BurstSliderGameNoteController* GlobalNamespace::BurstSliderNoteDisappearingArrowController::get_gameNoteController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderNoteDisappearingArrowController*>::get(),
                            "get_gameNoteController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BurstSliderGameNoteController*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::BurstSliderNoteDisappearingArrowController* GlobalNamespace::BurstSliderNoteDisappearingArrowController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BurstSliderNoteDisappearingArrowController*>());
}
inline void GlobalNamespace::BurstSliderNoteDisappearingArrowController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderNoteDisappearingArrowController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
