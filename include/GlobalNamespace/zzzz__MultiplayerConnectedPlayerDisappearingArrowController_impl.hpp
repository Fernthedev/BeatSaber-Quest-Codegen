#pragma once
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerDisappearingArrowController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerGameNoteController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController.get_gameNoteController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* (::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::get_gameNoteController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d77ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x23d77f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::__set__gameNoteController(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*, 0x50>(this, std::forward<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>(value));
}
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::__get__gameNoteController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*> GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::__get__gameNoteController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*, 0x50>(this);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::get_gameNoteController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController*>::get(),
                            "get_gameNoteController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController* GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController*>());
}
inline void GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
