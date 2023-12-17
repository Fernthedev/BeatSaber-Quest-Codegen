#pragma once
#include "GlobalNamespace/zzzz__INoteControllerNoteWasMissedEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::INoteControllerNoteWasMissedEvent.HandleNoteControllerNoteWasMissed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::INoteControllerNoteWasMissedEvent::*)(::GlobalNamespace::NoteController*)>(&::GlobalNamespace::INoteControllerNoteWasMissedEvent::HandleNoteControllerNoteWasMissed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteControllerNoteWasMissedEvent*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteControllerNoteWasMissedEvent*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::INoteControllerNoteWasMissedEvent::HandleNoteControllerNoteWasMissed(::GlobalNamespace::NoteController*  noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteControllerNoteWasMissedEvent*>::get(),
                            "HandleNoteControllerNoteWasMissed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteController);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
