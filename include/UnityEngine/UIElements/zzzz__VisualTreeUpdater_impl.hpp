#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeUpdater_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualTreeUpdater_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeUpdater_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeUpdatePhase_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray::*)()>(&::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2db2524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray.set_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray::*)(::UnityEngine::UIElements::VisualTreeUpdatePhase, ::UnityEngine::UIElements::IVisualTreeUpdater*)>(&::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray::set_Item)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2db2b40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray*>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualTreeUpdatePhase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IVisualTreeUpdater*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IVisualTreeUpdater* (::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray::*)(::UnityEngine::UIElements::VisualTreeUpdatePhase)>(&::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray::get_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2db2a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray*>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualTreeUpdatePhase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IVisualTreeUpdater* (::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray::*)(int32_t)>(&::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray::get_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2db2788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray*>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray::__set_m_VisualTreeUpdaters(::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*,::Array<::UnityEngine::UIElements::IVisualTreeUpdater*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*,::Array<::UnityEngine::UIElements::IVisualTreeUpdater*>*>, 0x10>(this, std::forward<::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*,::Array<::UnityEngine::UIElements::IVisualTreeUpdater*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*,::Array<::UnityEngine::UIElements::IVisualTreeUpdater*>*>& UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray::__get_m_VisualTreeUpdaters()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*,::Array<::UnityEngine::UIElements::IVisualTreeUpdater*>*>, 0x10>(this);
}
constexpr ::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*,::Array<::UnityEngine::UIElements::IVisualTreeUpdater*>*> const& UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray::__get_m_VisualTreeUpdaters() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*,::Array<::UnityEngine::UIElements::IVisualTreeUpdater*>*>, 0x10>(this);
}
inline ::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray* UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray*>());
}
inline void UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray::set_Item(::UnityEngine::UIElements::VisualTreeUpdatePhase  phase, ::UnityEngine::UIElements::IVisualTreeUpdater*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray*>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualTreeUpdatePhase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IVisualTreeUpdater*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, phase, value);
}
inline ::UnityEngine::UIElements::IVisualTreeUpdater* UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray::get_Item(::UnityEngine::UIElements::VisualTreeUpdatePhase  phase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray*>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualTreeUpdatePhase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IVisualTreeUpdater*, false>(*this, ___internal_method, phase);
}
inline ::UnityEngine::UIElements::IVisualTreeUpdater* UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray*>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IVisualTreeUpdater*, false>(*this, ___internal_method, index);
}
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeUpdater._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeUpdater::*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(&::UnityEngine::UIElements::VisualTreeUpdater::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2db24a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeUpdater*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVisualElementPanel*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeUpdater.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeUpdater::*)()>(&::UnityEngine::UIElements::VisualTreeUpdater::Dispose)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2db26bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeUpdater*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeUpdater.UpdateVisualTreePhase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeUpdater::*)(::UnityEngine::UIElements::VisualTreeUpdatePhase)>(&::UnityEngine::UIElements::VisualTreeUpdater::UpdateVisualTreePhase)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x2db27b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeUpdater*>::get(),
                            "UpdateVisualTreePhase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualTreeUpdatePhase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeUpdater.OnVersionChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeUpdater::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(&::UnityEngine::UIElements::VisualTreeUpdater::OnVersionChanged)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2db2a40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeUpdater*>::get(),
                            "OnVersionChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VersionChangeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeUpdater.GetUpdater
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IVisualTreeUpdater* (::UnityEngine::UIElements::VisualTreeUpdater::*)(::UnityEngine::UIElements::VisualTreeUpdatePhase)>(&::UnityEngine::UIElements::VisualTreeUpdater::GetUpdater)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2db2b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeUpdater*>::get(),
                            "GetUpdater",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualTreeUpdatePhase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeUpdater.SetDefaultUpdaters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeUpdater::*)()>(&::UnityEngine::UIElements::VisualTreeUpdater::SetDefaultUpdaters)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2db2580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeUpdater*>::get(),
                            "SetDefaultUpdaters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::UIElements::VisualTreeUpdater::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void UnityEngine::UIElements::VisualTreeUpdater::__set_m_Panel(::UnityEngine::UIElements::BaseVisualElementPanel*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::BaseVisualElementPanel*, 0x10>(this, std::forward<::UnityEngine::UIElements::BaseVisualElementPanel*>(value));
}
constexpr ::UnityEngine::UIElements::BaseVisualElementPanel* UnityEngine::UIElements::VisualTreeUpdater::__get_m_Panel()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::BaseVisualElementPanel*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseVisualElementPanel*> UnityEngine::UIElements::VisualTreeUpdater::__get_m_Panel() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::BaseVisualElementPanel*, 0x10>(this);
}
constexpr void UnityEngine::UIElements::VisualTreeUpdater::__set_m_UpdaterArray(::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray*, 0x18>(this, std::forward<::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray*>(value));
}
constexpr ::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray* UnityEngine::UIElements::VisualTreeUpdater::__get_m_UpdaterArray()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray*> UnityEngine::UIElements::VisualTreeUpdater::__get_m_UpdaterArray() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray*, 0x18>(this);
}
inline ::UnityEngine::UIElements::VisualTreeUpdater* UnityEngine::UIElements::VisualTreeUpdater::New_ctor(::UnityEngine::UIElements::BaseVisualElementPanel*  panel)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::VisualTreeUpdater*>(panel));
}
inline void UnityEngine::UIElements::VisualTreeUpdater::_ctor(::UnityEngine::UIElements::BaseVisualElementPanel*  panel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeUpdater*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVisualElementPanel*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, panel);
}
inline void UnityEngine::UIElements::VisualTreeUpdater::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeUpdater*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeUpdater::UpdateVisualTreePhase(::UnityEngine::UIElements::VisualTreeUpdatePhase  phase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeUpdater*>::get(),
                            "UpdateVisualTreePhase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualTreeUpdatePhase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, phase);
}
inline void UnityEngine::UIElements::VisualTreeUpdater::OnVersionChanged(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::VersionChangeType  versionChangeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeUpdater*>::get(),
                            "OnVersionChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VersionChangeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ve, versionChangeType);
}
template<typename T>
inline void UnityEngine::UIElements::VisualTreeUpdater::SetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase  phase)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeUpdater*>::get(),
                        "SetUpdater",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualTreeUpdatePhase>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, phase);
}
inline ::UnityEngine::UIElements::IVisualTreeUpdater* UnityEngine::UIElements::VisualTreeUpdater::GetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase  phase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeUpdater*>::get(),
                            "GetUpdater",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualTreeUpdatePhase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IVisualTreeUpdater*, false>(*this, ___internal_method, phase);
}
inline void UnityEngine::UIElements::VisualTreeUpdater::SetDefaultUpdaters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeUpdater*>::get(),
                            "SetDefaultUpdaters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
