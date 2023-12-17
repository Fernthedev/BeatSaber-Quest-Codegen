#pragma once
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Panel_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusController_def.hpp"
#include "UnityEngine/UIElements/zzzz__AtlasBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__TimeMsFunction_def.hpp"
#include "UnityEngine/UIElements/zzzz__IMGUIContainer_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IScheduler_def.hpp"
#include "UnityEngine/UIElements/zzzz__SavePersistentViewData_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStylePropertyAnimationSystem_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/UIElements/zzzz__LoadResourceFunction_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/UIElements/zzzz__GetViewDataDictionary_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualTreeUpdater_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeUpdater_def.hpp"
#include "UnityEngine/UIElements/zzzz__TimerEventScheduler_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__ContextType_def.hpp"
#include "UnityEngine/zzzz__EventInterests_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeUpdatePhase_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventDispatcher_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_visualTree
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::get_visualTree)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dc9ba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "get_visualTree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_dispatcher
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventDispatcher* (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::get_dispatcher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dc9bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "get_dispatcher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.set_dispatcher
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)(::UnityEngine::UIElements::EventDispatcher*)>(&::UnityEngine::UIElements::Panel::set_dispatcher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dc9bb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "set_dispatcher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventDispatcher*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_timerEventScheduler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TimerEventScheduler* (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::get_timerEventScheduler)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2dc9bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "get_timerEventScheduler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_scheduler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IScheduler* (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::get_scheduler)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2dc9c28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_styleAnimationSystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IStylePropertyAnimationSystem* (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::get_styleAnimationSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dc9c2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.set_styleAnimationSystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)(::UnityEngine::UIElements::IStylePropertyAnimationSystem*)>(&::UnityEngine::UIElements::Panel::set_styleAnimationSystem)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2dc9c34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_ownerObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ScriptableObject* (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::get_ownerObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dc9ce8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.set_ownerObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)(::UnityEngine::ScriptableObject*)>(&::UnityEngine::UIElements::Panel::set_ownerObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dc9cf0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_contextType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ContextType (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::get_contextType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dc9cf8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  41
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.set_contextType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)(::UnityEngine::UIElements::ContextType)>(&::UnityEngine::UIElements::Panel::set_contextType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dc9d00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  42
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_saveViewData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::SavePersistentViewData* (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::get_saveViewData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dc9d08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_getViewDataDictionary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::GetViewDataDictionary* (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::get_getViewDataDictionary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dc9d10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_focusController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::FocusController* (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::get_focusController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dc9d18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "get_focusController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.set_focusController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)(::UnityEngine::UIElements::FocusController*)>(&::UnityEngine::UIElements::Panel::set_focusController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dc9d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "set_focusController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusController*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_IMGUIEventInterests
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventInterests (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::get_IMGUIEventInterests)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2dc9d28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.set_IMGUIEventInterests
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)(::UnityEngine::EventInterests)>(&::UnityEngine::UIElements::Panel::set_IMGUIEventInterests)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2dc9d38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_loadResourceFunc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::LoadResourceFunction* (*)()>(&::UnityEngine::UIElements::Panel::get_loadResourceFunc)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2dc9d48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "get_loadResourceFunc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.LoadResource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (*)(::StringW, ::System::Type*, float_t)>(&::UnityEngine::UIElements::Panel::LoadResource)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2dc9da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "LoadResource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.Focus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::Focus)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2db5334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "Focus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.Blur
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::Blur)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2db5308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "Blur",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dc9ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.set_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)(::StringW)>(&::UnityEngine::UIElements::Panel::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dc9ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "set_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.CreateMarkers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::CreateMarkers)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2dc9edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "CreateMarkers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_TimeSinceStartup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TimeMsFunction* (*)()>(&::UnityEngine::UIElements::Panel::get_TimeSinceStartup)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2dca128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "get_TimeSinceStartup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_IMGUIContainersCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::get_IMGUIContainersCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dca180;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.set_IMGUIContainersCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)(int32_t)>(&::UnityEngine::UIElements::Panel::set_IMGUIContainersCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dca188;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_rootIMGUIContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IMGUIContainer* (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::get_rootIMGUIContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dca190;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dca198;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_hierarchyVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::get_hierarchyVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dca1a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_standardShader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Shader* (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::get_standardShader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dca1a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  46
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_atlas
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::AtlasBase* (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::get_atlas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dca1b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  48
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.set_atlas
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)(::UnityEngine::UIElements::AtlasBase*)>(&::UnityEngine::UIElements::Panel::set_atlas)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2dca1b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  49
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)(::UnityEngine::ScriptableObject*, ::UnityEngine::UIElements::ContextType, ::UnityEngine::UIElements::EventDispatcher*)>(&::UnityEngine::UIElements::Panel::_ctor)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x2dca22c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventDispatcher*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)(bool)>(&::UnityEngine::UIElements::Panel::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2dca5b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.TimeSinceStartupMs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&::UnityEngine::UIElements::Panel::TimeSinceStartupMs)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2db784c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "TimeSinceStartupMs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.DefaultTimeSinceStartupMs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&::UnityEngine::UIElements::Panel::DefaultTimeSinceStartupMs)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2dca620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "DefaultTimeSinceStartupMs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.PickAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector2, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*)>(&::UnityEngine::UIElements::Panel::PickAll)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2dca658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "PickAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.PerformPick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector2, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*)>(&::UnityEngine::UIElements::Panel::PerformPick)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x2dca6d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "PerformPick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.PickAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::Panel::*)(::UnityEngine::Vector2, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*)>(&::UnityEngine::UIElements::Panel::PickAll)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2dca9b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  44
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.Pick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::Panel::*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::Panel::Pick)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2dcaa90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  43
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.ValidateLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::ValidateLayout)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2dcacfc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.UpdateAnimations
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::UpdateAnimations)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2dcad60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.UpdateBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::UpdateBindings)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2dcad80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.ApplyStyles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::ApplyStyles)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2dcada0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.UpdateForRepaint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::UpdateForRepaint)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2dcadc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "UpdateForRepaint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.Repaint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)(::UnityEngine::Event*)>(&::UnityEngine::UIElements::Panel::Repaint)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x2dcae34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.OnVersionChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(&::UnityEngine::UIElements::Panel::OnVersionChanged)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2dcb1b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.GetUpdater
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IVisualTreeUpdater* (::UnityEngine::UIElements::Panel::*)(::UnityEngine::UIElements::VisualTreeUpdatePhase)>(&::UnityEngine::UIElements::Panel::GetUpdater)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2dcb204;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                  45
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel._Pick_g__PixelOf_99_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::Panel::_Pick_g__PixelOf_99_0)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2dcac04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "<Pick>g__PixelOf|99_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::Panel::__set_m_RootContainer(::UnityEngine::UIElements::VisualElement*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::VisualElement*, 0xa0>(this, std::forward<::UnityEngine::UIElements::VisualElement*>(value));
}
constexpr ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::Panel::__get_m_RootContainer()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> UnityEngine::UIElements::Panel::__get_m_RootContainer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0xa0>(this);
}
constexpr void UnityEngine::UIElements::Panel::__set_m_VisualTreeUpdater(::UnityEngine::UIElements::VisualTreeUpdater*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::VisualTreeUpdater*, 0xa8>(this, std::forward<::UnityEngine::UIElements::VisualTreeUpdater*>(value));
}
constexpr ::UnityEngine::UIElements::VisualTreeUpdater* UnityEngine::UIElements::Panel::__get_m_VisualTreeUpdater()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualTreeUpdater*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualTreeUpdater*> UnityEngine::UIElements::Panel::__get_m_VisualTreeUpdater() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualTreeUpdater*, 0xa8>(this);
}
constexpr void UnityEngine::UIElements::Panel::__set_m_StylePropertyAnimationSystem(::UnityEngine::UIElements::IStylePropertyAnimationSystem*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::IStylePropertyAnimationSystem*, 0xb0>(this, std::forward<::UnityEngine::UIElements::IStylePropertyAnimationSystem*>(value));
}
constexpr ::UnityEngine::UIElements::IStylePropertyAnimationSystem* UnityEngine::UIElements::Panel::__get_m_StylePropertyAnimationSystem()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::IStylePropertyAnimationSystem*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IStylePropertyAnimationSystem*> UnityEngine::UIElements::Panel::__get_m_StylePropertyAnimationSystem() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::IStylePropertyAnimationSystem*, 0xb0>(this);
}
constexpr void UnityEngine::UIElements::Panel::__set_m_PanelName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xb8>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::UIElements::Panel::__get_m_PanelName()  {
return ::cordl_internals::getInstanceField<::StringW, 0xb8>(this);
}
constexpr ::StringW const& UnityEngine::UIElements::Panel::__get_m_PanelName() const {
return ::cordl_internals::getInstanceField<::StringW, 0xb8>(this);
}
constexpr void UnityEngine::UIElements::Panel::__set_m_Version(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0xc0>(this, std::forward<uint32_t>(value));
}
constexpr uint32_t& UnityEngine::UIElements::Panel::__get_m_Version()  {
return ::cordl_internals::getInstanceField<uint32_t, 0xc0>(this);
}
constexpr uint32_t const& UnityEngine::UIElements::Panel::__get_m_Version() const {
return ::cordl_internals::getInstanceField<uint32_t, 0xc0>(this);
}
constexpr void UnityEngine::UIElements::Panel::__set_m_RepaintVersion(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0xc4>(this, std::forward<uint32_t>(value));
}
constexpr uint32_t& UnityEngine::UIElements::Panel::__get_m_RepaintVersion()  {
return ::cordl_internals::getInstanceField<uint32_t, 0xc4>(this);
}
constexpr uint32_t const& UnityEngine::UIElements::Panel::__get_m_RepaintVersion() const {
return ::cordl_internals::getInstanceField<uint32_t, 0xc4>(this);
}
constexpr void UnityEngine::UIElements::Panel::__set_m_HierarchyVersion(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0xc8>(this, std::forward<uint32_t>(value));
}
constexpr uint32_t& UnityEngine::UIElements::Panel::__get_m_HierarchyVersion()  {
return ::cordl_internals::getInstanceField<uint32_t, 0xc8>(this);
}
constexpr uint32_t const& UnityEngine::UIElements::Panel::__get_m_HierarchyVersion() const {
return ::cordl_internals::getInstanceField<uint32_t, 0xc8>(this);
}
constexpr void UnityEngine::UIElements::Panel::__set_m_MarkerBeforeUpdate(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setInstanceField<::Unity::Profiling::ProfilerMarker, 0xd0>(this, std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
constexpr ::Unity::Profiling::ProfilerMarker& UnityEngine::UIElements::Panel::__get_m_MarkerBeforeUpdate()  {
return ::cordl_internals::getInstanceField<::Unity::Profiling::ProfilerMarker, 0xd0>(this);
}
constexpr ::Unity::Profiling::ProfilerMarker const& UnityEngine::UIElements::Panel::__get_m_MarkerBeforeUpdate() const {
return ::cordl_internals::getInstanceField<::Unity::Profiling::ProfilerMarker, 0xd0>(this);
}
constexpr void UnityEngine::UIElements::Panel::__set_m_MarkerUpdate(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setInstanceField<::Unity::Profiling::ProfilerMarker, 0xd8>(this, std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
constexpr ::Unity::Profiling::ProfilerMarker& UnityEngine::UIElements::Panel::__get_m_MarkerUpdate()  {
return ::cordl_internals::getInstanceField<::Unity::Profiling::ProfilerMarker, 0xd8>(this);
}
constexpr ::Unity::Profiling::ProfilerMarker const& UnityEngine::UIElements::Panel::__get_m_MarkerUpdate() const {
return ::cordl_internals::getInstanceField<::Unity::Profiling::ProfilerMarker, 0xd8>(this);
}
constexpr void UnityEngine::UIElements::Panel::__set_m_MarkerLayout(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setInstanceField<::Unity::Profiling::ProfilerMarker, 0xe0>(this, std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
constexpr ::Unity::Profiling::ProfilerMarker& UnityEngine::UIElements::Panel::__get_m_MarkerLayout()  {
return ::cordl_internals::getInstanceField<::Unity::Profiling::ProfilerMarker, 0xe0>(this);
}
constexpr ::Unity::Profiling::ProfilerMarker const& UnityEngine::UIElements::Panel::__get_m_MarkerLayout() const {
return ::cordl_internals::getInstanceField<::Unity::Profiling::ProfilerMarker, 0xe0>(this);
}
constexpr void UnityEngine::UIElements::Panel::__set_m_MarkerBindings(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setInstanceField<::Unity::Profiling::ProfilerMarker, 0xe8>(this, std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
constexpr ::Unity::Profiling::ProfilerMarker& UnityEngine::UIElements::Panel::__get_m_MarkerBindings()  {
return ::cordl_internals::getInstanceField<::Unity::Profiling::ProfilerMarker, 0xe8>(this);
}
constexpr ::Unity::Profiling::ProfilerMarker const& UnityEngine::UIElements::Panel::__get_m_MarkerBindings() const {
return ::cordl_internals::getInstanceField<::Unity::Profiling::ProfilerMarker, 0xe8>(this);
}
constexpr void UnityEngine::UIElements::Panel::__set_m_MarkerAnimations(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setInstanceField<::Unity::Profiling::ProfilerMarker, 0xf0>(this, std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
constexpr ::Unity::Profiling::ProfilerMarker& UnityEngine::UIElements::Panel::__get_m_MarkerAnimations()  {
return ::cordl_internals::getInstanceField<::Unity::Profiling::ProfilerMarker, 0xf0>(this);
}
constexpr ::Unity::Profiling::ProfilerMarker const& UnityEngine::UIElements::Panel::__get_m_MarkerAnimations() const {
return ::cordl_internals::getInstanceField<::Unity::Profiling::ProfilerMarker, 0xf0>(this);
}
inline void UnityEngine::UIElements::Panel::setStaticF_s_MarkerPickAll(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerPickAll", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::Panel::getStaticF_s_MarkerPickAll()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerPickAll", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get>();
}
constexpr void UnityEngine::UIElements::Panel::__set__dispatcher_k__BackingField(::UnityEngine::UIElements::EventDispatcher*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::EventDispatcher*, 0xf8>(this, std::forward<::UnityEngine::UIElements::EventDispatcher*>(value));
}
constexpr ::UnityEngine::UIElements::EventDispatcher* UnityEngine::UIElements::Panel::__get__dispatcher_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::EventDispatcher*, 0xf8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::EventDispatcher*> UnityEngine::UIElements::Panel::__get__dispatcher_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::EventDispatcher*, 0xf8>(this);
}
constexpr void UnityEngine::UIElements::Panel::__set_m_Scheduler(::UnityEngine::UIElements::TimerEventScheduler*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::TimerEventScheduler*, 0x100>(this, std::forward<::UnityEngine::UIElements::TimerEventScheduler*>(value));
}
constexpr ::UnityEngine::UIElements::TimerEventScheduler* UnityEngine::UIElements::Panel::__get_m_Scheduler()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::TimerEventScheduler*, 0x100>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TimerEventScheduler*> UnityEngine::UIElements::Panel::__get_m_Scheduler() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::TimerEventScheduler*, 0x100>(this);
}
constexpr void UnityEngine::UIElements::Panel::__set__ownerObject_k__BackingField(::UnityEngine::ScriptableObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ScriptableObject*, 0x108>(this, std::forward<::UnityEngine::ScriptableObject*>(value));
}
constexpr ::UnityEngine::ScriptableObject* UnityEngine::UIElements::Panel::__get__ownerObject_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ScriptableObject*, 0x108>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ScriptableObject*> UnityEngine::UIElements::Panel::__get__ownerObject_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ScriptableObject*, 0x108>(this);
}
constexpr void UnityEngine::UIElements::Panel::__set__contextType_k__BackingField(::UnityEngine::UIElements::ContextType  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::ContextType, 0x110>(this, std::forward<::UnityEngine::UIElements::ContextType>(value));
}
constexpr ::UnityEngine::UIElements::ContextType& UnityEngine::UIElements::Panel::__get__contextType_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ContextType, 0x110>(this);
}
constexpr ::UnityEngine::UIElements::ContextType const& UnityEngine::UIElements::Panel::__get__contextType_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ContextType, 0x110>(this);
}
constexpr void UnityEngine::UIElements::Panel::__set__saveViewData_k__BackingField(::UnityEngine::UIElements::SavePersistentViewData*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::SavePersistentViewData*, 0x118>(this, std::forward<::UnityEngine::UIElements::SavePersistentViewData*>(value));
}
constexpr ::UnityEngine::UIElements::SavePersistentViewData* UnityEngine::UIElements::Panel::__get__saveViewData_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::SavePersistentViewData*, 0x118>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::SavePersistentViewData*> UnityEngine::UIElements::Panel::__get__saveViewData_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::SavePersistentViewData*, 0x118>(this);
}
constexpr void UnityEngine::UIElements::Panel::__set__getViewDataDictionary_k__BackingField(::UnityEngine::UIElements::GetViewDataDictionary*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::GetViewDataDictionary*, 0x120>(this, std::forward<::UnityEngine::UIElements::GetViewDataDictionary*>(value));
}
constexpr ::UnityEngine::UIElements::GetViewDataDictionary* UnityEngine::UIElements::Panel::__get__getViewDataDictionary_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::GetViewDataDictionary*, 0x120>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::GetViewDataDictionary*> UnityEngine::UIElements::Panel::__get__getViewDataDictionary_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::GetViewDataDictionary*, 0x120>(this);
}
constexpr void UnityEngine::UIElements::Panel::__set__focusController_k__BackingField(::UnityEngine::UIElements::FocusController*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::FocusController*, 0x128>(this, std::forward<::UnityEngine::UIElements::FocusController*>(value));
}
constexpr ::UnityEngine::UIElements::FocusController* UnityEngine::UIElements::Panel::__get__focusController_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::FocusController*, 0x128>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::FocusController*> UnityEngine::UIElements::Panel::__get__focusController_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::FocusController*, 0x128>(this);
}
constexpr void UnityEngine::UIElements::Panel::__set__IMGUIEventInterests_k__BackingField(::UnityEngine::EventInterests  value)  {
::cordl_internals::setInstanceField<::UnityEngine::EventInterests, 0x130>(this, std::forward<::UnityEngine::EventInterests>(value));
}
constexpr ::UnityEngine::EventInterests& UnityEngine::UIElements::Panel::__get__IMGUIEventInterests_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::EventInterests, 0x130>(this);
}
constexpr ::UnityEngine::EventInterests const& UnityEngine::UIElements::Panel::__get__IMGUIEventInterests_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::EventInterests, 0x130>(this);
}
inline void UnityEngine::UIElements::Panel::setStaticF__loadResourceFunc_k__BackingField(::UnityEngine::UIElements::LoadResourceFunction*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::LoadResourceFunction*, "<loadResourceFunc>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get>(std::forward<::UnityEngine::UIElements::LoadResourceFunction*>(value));
}
inline ::UnityEngine::UIElements::LoadResourceFunction* UnityEngine::UIElements::Panel::getStaticF__loadResourceFunc_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::LoadResourceFunction*, "<loadResourceFunc>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get>();
}
inline void UnityEngine::UIElements::Panel::setStaticF__TimeSinceStartup_k__BackingField(::UnityEngine::UIElements::TimeMsFunction*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::TimeMsFunction*, "<TimeSinceStartup>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get>(std::forward<::UnityEngine::UIElements::TimeMsFunction*>(value));
}
inline ::UnityEngine::UIElements::TimeMsFunction* UnityEngine::UIElements::Panel::getStaticF__TimeSinceStartup_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::TimeMsFunction*, "<TimeSinceStartup>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get>();
}
constexpr void UnityEngine::UIElements::Panel::__set__IMGUIContainersCount_k__BackingField(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x134>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::Panel::__get__IMGUIContainersCount_k__BackingField()  {
return ::cordl_internals::getInstanceField<int32_t, 0x134>(this);
}
constexpr int32_t const& UnityEngine::UIElements::Panel::__get__IMGUIContainersCount_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x134>(this);
}
constexpr void UnityEngine::UIElements::Panel::__set__rootIMGUIContainer_k__BackingField(::UnityEngine::UIElements::IMGUIContainer*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::IMGUIContainer*, 0x138>(this, std::forward<::UnityEngine::UIElements::IMGUIContainer*>(value));
}
constexpr ::UnityEngine::UIElements::IMGUIContainer* UnityEngine::UIElements::Panel::__get__rootIMGUIContainer_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::IMGUIContainer*, 0x138>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IMGUIContainer*> UnityEngine::UIElements::Panel::__get__rootIMGUIContainer_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::IMGUIContainer*, 0x138>(this);
}
constexpr void UnityEngine::UIElements::Panel::__set_m_StandardShader(::UnityEngine::Shader*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Shader*, 0x140>(this, std::forward<::UnityEngine::Shader*>(value));
}
constexpr ::UnityEngine::Shader* UnityEngine::UIElements::Panel::__get_m_StandardShader()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader*, 0x140>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> UnityEngine::UIElements::Panel::__get_m_StandardShader() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader*, 0x140>(this);
}
constexpr void UnityEngine::UIElements::Panel::__set_m_Atlas(::UnityEngine::UIElements::AtlasBase*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::AtlasBase*, 0x148>(this, std::forward<::UnityEngine::UIElements::AtlasBase*>(value));
}
constexpr ::UnityEngine::UIElements::AtlasBase* UnityEngine::UIElements::Panel::__get_m_Atlas()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::AtlasBase*, 0x148>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::AtlasBase*> UnityEngine::UIElements::Panel::__get_m_Atlas() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::AtlasBase*, 0x148>(this);
}
constexpr void UnityEngine::UIElements::Panel::__set_m_ValidatingLayout(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x150>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::Panel::__get_m_ValidatingLayout()  {
return ::cordl_internals::getInstanceField<bool, 0x150>(this);
}
constexpr bool const& UnityEngine::UIElements::Panel::__get_m_ValidatingLayout() const {
return ::cordl_internals::getInstanceField<bool, 0x150>(this);
}
inline void UnityEngine::UIElements::Panel::setStaticF_beforeAnyRepaint(::System::Action_1<::UnityEngine::UIElements::Panel*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::UIElements::Panel*>*, "beforeAnyRepaint", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get>(std::forward<::System::Action_1<::UnityEngine::UIElements::Panel*>*>(value));
}
inline ::System::Action_1<::UnityEngine::UIElements::Panel*>* UnityEngine::UIElements::Panel::getStaticF_beforeAnyRepaint()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::UIElements::Panel*>*, "beforeAnyRepaint", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get>();
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::Panel::get_visualTree()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "get_visualTree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::EventDispatcher* UnityEngine::UIElements::Panel::get_dispatcher()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "get_dispatcher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventDispatcher*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::set_dispatcher(::UnityEngine::UIElements::EventDispatcher*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "set_dispatcher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventDispatcher*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::TimerEventScheduler* UnityEngine::UIElements::Panel::get_timerEventScheduler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "get_timerEventScheduler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TimerEventScheduler*, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::IScheduler* UnityEngine::UIElements::Panel::get_scheduler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "get_scheduler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IScheduler*, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::IStylePropertyAnimationSystem* UnityEngine::UIElements::Panel::get_styleAnimationSystem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "get_styleAnimationSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IStylePropertyAnimationSystem*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::set_styleAnimationSystem(::UnityEngine::UIElements::IStylePropertyAnimationSystem*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "set_styleAnimationSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IStylePropertyAnimationSystem*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::ScriptableObject* UnityEngine::UIElements::Panel::get_ownerObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "get_ownerObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ScriptableObject*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::set_ownerObject(::UnityEngine::ScriptableObject*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "set_ownerObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::ContextType UnityEngine::UIElements::Panel::get_contextType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "get_contextType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ContextType, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::set_contextType(::UnityEngine::UIElements::ContextType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "set_contextType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::SavePersistentViewData* UnityEngine::UIElements::Panel::get_saveViewData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "get_saveViewData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::SavePersistentViewData*, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::GetViewDataDictionary* UnityEngine::UIElements::Panel::get_getViewDataDictionary()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "get_getViewDataDictionary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::GetViewDataDictionary*, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::FocusController* UnityEngine::UIElements::Panel::get_focusController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "get_focusController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FocusController*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::set_focusController(::UnityEngine::UIElements::FocusController*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "set_focusController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::EventInterests UnityEngine::UIElements::Panel::get_IMGUIEventInterests()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "get_IMGUIEventInterests",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventInterests, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::set_IMGUIEventInterests(::UnityEngine::EventInterests  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "set_IMGUIEventInterests",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventInterests>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::LoadResourceFunction* UnityEngine::UIElements::Panel::get_loadResourceFunc()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "get_loadResourceFunc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::LoadResourceFunction*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Object* UnityEngine::UIElements::Panel::LoadResource(::StringW  pathName, ::System::Type*  type, float_t  dpiScaling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "LoadResource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Object*, false>(nullptr, ___internal_method, pathName, type, dpiScaling);
}
inline void UnityEngine::UIElements::Panel::Focus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "Focus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::Blur()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "Blur",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::Panel::get_name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::set_name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "set_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Panel::CreateMarkers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "CreateMarkers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::TimeMsFunction* UnityEngine::UIElements::Panel::get_TimeSinceStartup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "get_TimeSinceStartup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TimeMsFunction*, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::UIElements::Panel::get_IMGUIContainersCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "get_IMGUIContainersCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::set_IMGUIContainersCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "set_IMGUIContainersCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::IMGUIContainer* UnityEngine::UIElements::Panel::get_rootIMGUIContainer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "get_rootIMGUIContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IMGUIContainer*, false>(*this, ___internal_method);
}
inline uint32_t UnityEngine::UIElements::Panel::get_version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "get_version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method);
}
inline uint32_t UnityEngine::UIElements::Panel::get_hierarchyVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "get_hierarchyVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method);
}
inline ::UnityEngine::Shader* UnityEngine::UIElements::Panel::get_standardShader()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "get_standardShader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Shader*, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::AtlasBase* UnityEngine::UIElements::Panel::get_atlas()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "get_atlas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::AtlasBase*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::set_atlas(::UnityEngine::UIElements::AtlasBase*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "set_atlas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AtlasBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::Panel* UnityEngine::UIElements::Panel::New_ctor(::UnityEngine::ScriptableObject*  ownerObject, ::UnityEngine::UIElements::ContextType  contextType, ::UnityEngine::UIElements::EventDispatcher*  dispatcher)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::Panel*>(ownerObject, contextType, dispatcher));
}
inline void UnityEngine::UIElements::Panel::_ctor(::UnityEngine::ScriptableObject*  ownerObject, ::UnityEngine::UIElements::ContextType  contextType, ::UnityEngine::UIElements::EventDispatcher*  dispatcher)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventDispatcher*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ownerObject, contextType, dispatcher);
}
inline void UnityEngine::UIElements::Panel::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disposing);
}
inline int64_t UnityEngine::UIElements::Panel::TimeSinceStartupMs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "TimeSinceStartupMs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method);
}
inline int64_t UnityEngine::UIElements::Panel::DefaultTimeSinceStartupMs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "DefaultTimeSinceStartupMs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method);
}
/// @param picked: ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* (default: csnull)
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::Panel::PickAll(::UnityEngine::UIElements::VisualElement*  root, ::UnityEngine::Vector2  point, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*  picked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "PickAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(nullptr, ___internal_method, root, point, picked);
}
/// @param picked: ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* (default: csnull)
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::Panel::PerformPick(::UnityEngine::UIElements::VisualElement*  root, ::UnityEngine::Vector2  point, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*  picked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "PerformPick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(nullptr, ___internal_method, root, point, picked);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::Panel::PickAll(::UnityEngine::Vector2  point, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*  picked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "PickAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(*this, ___internal_method, point, picked);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::Panel::Pick(::UnityEngine::Vector2  point)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "Pick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(*this, ___internal_method, point);
}
inline void UnityEngine::UIElements::Panel::ValidateLayout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "ValidateLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::UpdateAnimations()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "UpdateAnimations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::UpdateBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "UpdateBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::ApplyStyles()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "ApplyStyles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::UpdateForRepaint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "UpdateForRepaint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::Repaint(::UnityEngine::Event*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "Repaint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, e);
}
inline void UnityEngine::UIElements::Panel::OnVersionChanged(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::VersionChangeType  versionChangeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "OnVersionChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VersionChangeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ve, versionChangeType);
}
inline ::UnityEngine::UIElements::IVisualTreeUpdater* UnityEngine::UIElements::Panel::GetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase  phase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "GetUpdater",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualTreeUpdatePhase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IVisualTreeUpdater*, false>(*this, ___internal_method, phase);
}
inline ::UnityEngine::Vector2Int UnityEngine::UIElements::Panel::_Pick_g__PixelOf_99_0(::UnityEngine::Vector2  p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                            "<Pick>g__PixelOf|99_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int, false>(nullptr, ___internal_method, p);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
