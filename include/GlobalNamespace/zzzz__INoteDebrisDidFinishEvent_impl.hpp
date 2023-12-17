#pragma once
#include "GlobalNamespace/zzzz__INoteDebrisDidFinishEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteDebris_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::INoteDebrisDidFinishEvent.HandleNoteDebrisDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::INoteDebrisDidFinishEvent::*)(::GlobalNamespace::NoteDebris*)>(&::GlobalNamespace::INoteDebrisDidFinishEvent::HandleNoteDebrisDidFinish)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteDebrisDidFinishEvent*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteDebrisDidFinishEvent*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::INoteDebrisDidFinishEvent::HandleNoteDebrisDidFinish(::GlobalNamespace::NoteDebris*  noteDebris)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteDebrisDidFinishEvent*>::get(),
                            "HandleNoteDebrisDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteDebris*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteDebris);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
