#pragma once
#include "UnityEngine/Playables/zzzz__INotificationReceiver_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__INotification_def.hpp"
//  Writing Method size for method: ::UnityEngine::Playables::INotificationReceiver.OnNotify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::INotificationReceiver::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::INotification*, ::System::Object*)>(&::UnityEngine::Playables::INotificationReceiver::OnNotify)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::INotificationReceiver*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::INotificationReceiver*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Playables::INotificationReceiver::OnNotify(::UnityEngine::Playables::Playable  origin, ::UnityEngine::Playables::INotification*  notification, ::System::Object*  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::INotificationReceiver*>::get(),
                            "OnNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::INotification*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, origin, notification, context);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
