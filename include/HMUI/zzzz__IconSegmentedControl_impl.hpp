#pragma once
#include "HMUI/zzzz__SegmentedControl_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__IconSegmentedControl_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "HMUI/zzzz__SegmentedControlCell_def.hpp"
#include "HMUI/zzzz__IconSegmentedControlCell_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "HMUI/zzzz__IconSegmentedControl_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::HMUI::__IconSegmentedControl__DataItem.get_icon
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite* (::HMUI::__IconSegmentedControl__DataItem::*)()>(&::HMUI::__IconSegmentedControl__DataItem::get_icon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211f950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__IconSegmentedControl__DataItem*>::get(),
                            "get_icon",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__IconSegmentedControl__DataItem.set_icon
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__IconSegmentedControl__DataItem::*)(::UnityEngine::Sprite*)>(&::HMUI::__IconSegmentedControl__DataItem::set_icon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211f958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__IconSegmentedControl__DataItem*>::get(),
                            "set_icon",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__IconSegmentedControl__DataItem.get_hintText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HMUI::__IconSegmentedControl__DataItem::*)()>(&::HMUI::__IconSegmentedControl__DataItem::get_hintText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211f960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__IconSegmentedControl__DataItem*>::get(),
                            "get_hintText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__IconSegmentedControl__DataItem.set_hintText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__IconSegmentedControl__DataItem::*)(::StringW)>(&::HMUI::__IconSegmentedControl__DataItem::set_hintText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211f968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__IconSegmentedControl__DataItem*>::get(),
                            "set_hintText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__IconSegmentedControl__DataItem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__IconSegmentedControl__DataItem::*)(::UnityEngine::Sprite*, ::StringW)>(&::HMUI::__IconSegmentedControl__DataItem::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x211f970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__IconSegmentedControl__DataItem*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::__IconSegmentedControl__DataItem::__set__icon_k__BackingField(::UnityEngine::Sprite*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Sprite*, 0x10>(this, std::forward<::UnityEngine::Sprite*>(value));
}
constexpr ::UnityEngine::Sprite* HMUI::__IconSegmentedControl__DataItem::__get__icon_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Sprite*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> HMUI::__IconSegmentedControl__DataItem::__get__icon_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Sprite*, 0x10>(this);
}
constexpr void HMUI::__IconSegmentedControl__DataItem::__set__hintText_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HMUI::__IconSegmentedControl__DataItem::__get__hintText_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& HMUI::__IconSegmentedControl__DataItem::__get__hintText_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
inline ::UnityEngine::Sprite* HMUI::__IconSegmentedControl__DataItem::get_icon()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__IconSegmentedControl__DataItem*>::get(),
                            "get_icon",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Sprite*, false>(*this, ___internal_method);
}
inline void HMUI::__IconSegmentedControl__DataItem::set_icon(::UnityEngine::Sprite*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__IconSegmentedControl__DataItem*>::get(),
                            "set_icon",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::StringW HMUI::__IconSegmentedControl__DataItem::get_hintText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__IconSegmentedControl__DataItem*>::get(),
                            "get_hintText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void HMUI::__IconSegmentedControl__DataItem::set_hintText(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__IconSegmentedControl__DataItem*>::get(),
                            "set_hintText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::HMUI::__IconSegmentedControl__DataItem* HMUI::__IconSegmentedControl__DataItem::New_ctor(::UnityEngine::Sprite*  icon, ::StringW  hintText)  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__IconSegmentedControl__DataItem*>(icon, hintText));
}
inline void HMUI::__IconSegmentedControl__DataItem::_ctor(::UnityEngine::Sprite*  icon, ::StringW  hintText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__IconSegmentedControl__DataItem*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, icon, hintText);
}
//  Writing Method size for method: ::HMUI::IconSegmentedControl.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::IconSegmentedControl::*)()>(&::HMUI::IconSegmentedControl::Init)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x211efa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControl*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconSegmentedControl.SetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::IconSegmentedControl::*)(::ArrayW<::HMUI::__IconSegmentedControl__DataItem*,::Array<::HMUI::__IconSegmentedControl__DataItem*>*>)>(&::HMUI::IconSegmentedControl::SetData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x211efc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControl*>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::__IconSegmentedControl__DataItem*,::Array<::HMUI::__IconSegmentedControl__DataItem*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconSegmentedControl.NumberOfCells
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HMUI::IconSegmentedControl::*)()>(&::HMUI::IconSegmentedControl::NumberOfCells)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x211f40c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControl*>::get(),
                            "NumberOfCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconSegmentedControl.CellForCellNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::SegmentedControlCell* (::HMUI::IconSegmentedControl::*)(int32_t)>(&::HMUI::IconSegmentedControl::CellForCellNumber)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x211f424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControl*>::get(),
                            "CellForCellNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconSegmentedControl.InstantiateCell
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::IconSegmentedControlCell* (::HMUI::IconSegmentedControl::*)(::UnityEngine::Object*)>(&::HMUI::IconSegmentedControl::InstantiateCell)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x211f5a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControl*>::get(),
                            "InstantiateCell",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconSegmentedControl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::IconSegmentedControl::*)()>(&::HMUI::IconSegmentedControl::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x211f834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControl*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HMUI::__SegmentedControl__IDataSource"
constexpr  HMUI::IconSegmentedControl::operator ::HMUI::__SegmentedControl__IDataSource*() noexcept {
return static_cast<::HMUI::__SegmentedControl__IDataSource*>(static_cast<void*>(this));
}
constexpr void HMUI::IconSegmentedControl::__set__iconSize(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this, std::forward<float_t>(value));
}
constexpr float_t& HMUI::IconSegmentedControl::__get__iconSize()  {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr float_t const& HMUI::IconSegmentedControl::__get__iconSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr void HMUI::IconSegmentedControl::__set__overrideCellSize(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x5c>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::IconSegmentedControl::__get__overrideCellSize()  {
return ::cordl_internals::getInstanceField<bool, 0x5c>(this);
}
constexpr bool const& HMUI::IconSegmentedControl::__get__overrideCellSize() const {
return ::cordl_internals::getInstanceField<bool, 0x5c>(this);
}
constexpr void HMUI::IconSegmentedControl::__set__padding(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this, std::forward<float_t>(value));
}
constexpr float_t& HMUI::IconSegmentedControl::__get__padding()  {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this);
}
constexpr float_t const& HMUI::IconSegmentedControl::__get__padding() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this);
}
constexpr void HMUI::IconSegmentedControl::__set__hideCellBackground(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x64>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::IconSegmentedControl::__get__hideCellBackground()  {
return ::cordl_internals::getInstanceField<bool, 0x64>(this);
}
constexpr bool const& HMUI::IconSegmentedControl::__get__hideCellBackground() const {
return ::cordl_internals::getInstanceField<bool, 0x64>(this);
}
constexpr void HMUI::IconSegmentedControl::__set__firstCellPrefab(::HMUI::IconSegmentedControlCell*  value)  {
::cordl_internals::setInstanceField<::HMUI::IconSegmentedControlCell*, 0x68>(this, std::forward<::HMUI::IconSegmentedControlCell*>(value));
}
constexpr ::HMUI::IconSegmentedControlCell* HMUI::IconSegmentedControl::__get__firstCellPrefab()  {
return ::cordl_internals::getInstanceField<::HMUI::IconSegmentedControlCell*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::IconSegmentedControlCell*> HMUI::IconSegmentedControl::__get__firstCellPrefab() const {
return ::cordl_internals::getInstanceField<::HMUI::IconSegmentedControlCell*, 0x68>(this);
}
constexpr void HMUI::IconSegmentedControl::__set__lastCellPrefab(::HMUI::IconSegmentedControlCell*  value)  {
::cordl_internals::setInstanceField<::HMUI::IconSegmentedControlCell*, 0x70>(this, std::forward<::HMUI::IconSegmentedControlCell*>(value));
}
constexpr ::HMUI::IconSegmentedControlCell* HMUI::IconSegmentedControl::__get__lastCellPrefab()  {
return ::cordl_internals::getInstanceField<::HMUI::IconSegmentedControlCell*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::IconSegmentedControlCell*> HMUI::IconSegmentedControl::__get__lastCellPrefab() const {
return ::cordl_internals::getInstanceField<::HMUI::IconSegmentedControlCell*, 0x70>(this);
}
constexpr void HMUI::IconSegmentedControl::__set__middleCellPrefab(::HMUI::IconSegmentedControlCell*  value)  {
::cordl_internals::setInstanceField<::HMUI::IconSegmentedControlCell*, 0x78>(this, std::forward<::HMUI::IconSegmentedControlCell*>(value));
}
constexpr ::HMUI::IconSegmentedControlCell* HMUI::IconSegmentedControl::__get__middleCellPrefab()  {
return ::cordl_internals::getInstanceField<::HMUI::IconSegmentedControlCell*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::IconSegmentedControlCell*> HMUI::IconSegmentedControl::__get__middleCellPrefab() const {
return ::cordl_internals::getInstanceField<::HMUI::IconSegmentedControlCell*, 0x78>(this);
}
constexpr void HMUI::IconSegmentedControl::__set__singleCellPrefab(::HMUI::IconSegmentedControlCell*  value)  {
::cordl_internals::setInstanceField<::HMUI::IconSegmentedControlCell*, 0x80>(this, std::forward<::HMUI::IconSegmentedControlCell*>(value));
}
constexpr ::HMUI::IconSegmentedControlCell* HMUI::IconSegmentedControl::__get__singleCellPrefab()  {
return ::cordl_internals::getInstanceField<::HMUI::IconSegmentedControlCell*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::IconSegmentedControlCell*> HMUI::IconSegmentedControl::__get__singleCellPrefab() const {
return ::cordl_internals::getInstanceField<::HMUI::IconSegmentedControlCell*, 0x80>(this);
}
constexpr void HMUI::IconSegmentedControl::__set__container(::Zenject::DiContainer*  value)  {
::cordl_internals::setInstanceField<::Zenject::DiContainer*, 0x88>(this, std::forward<::Zenject::DiContainer*>(value));
}
constexpr ::Zenject::DiContainer* HMUI::IconSegmentedControl::__get__container()  {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> HMUI::IconSegmentedControl::__get__container() const {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x88>(this);
}
constexpr void HMUI::IconSegmentedControl::__set__dataItems(::ArrayW<::HMUI::__IconSegmentedControl__DataItem*,::Array<::HMUI::__IconSegmentedControl__DataItem*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::HMUI::__IconSegmentedControl__DataItem*,::Array<::HMUI::__IconSegmentedControl__DataItem*>*>, 0x90>(this, std::forward<::ArrayW<::HMUI::__IconSegmentedControl__DataItem*,::Array<::HMUI::__IconSegmentedControl__DataItem*>*>>(value));
}
constexpr ::ArrayW<::HMUI::__IconSegmentedControl__DataItem*,::Array<::HMUI::__IconSegmentedControl__DataItem*>*>& HMUI::IconSegmentedControl::__get__dataItems()  {
return ::cordl_internals::getInstanceField<::ArrayW<::HMUI::__IconSegmentedControl__DataItem*,::Array<::HMUI::__IconSegmentedControl__DataItem*>*>, 0x90>(this);
}
constexpr ::ArrayW<::HMUI::__IconSegmentedControl__DataItem*,::Array<::HMUI::__IconSegmentedControl__DataItem*>*> const& HMUI::IconSegmentedControl::__get__dataItems() const {
return ::cordl_internals::getInstanceField<::ArrayW<::HMUI::__IconSegmentedControl__DataItem*,::Array<::HMUI::__IconSegmentedControl__DataItem*>*>, 0x90>(this);
}
constexpr void HMUI::IconSegmentedControl::__set__isInitialized(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x98>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::IconSegmentedControl::__get__isInitialized()  {
return ::cordl_internals::getInstanceField<bool, 0x98>(this);
}
constexpr bool const& HMUI::IconSegmentedControl::__get__isInitialized() const {
return ::cordl_internals::getInstanceField<bool, 0x98>(this);
}
inline void HMUI::IconSegmentedControl::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControl*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::IconSegmentedControl::SetData(::ArrayW<::HMUI::__IconSegmentedControl__DataItem*,::Array<::HMUI::__IconSegmentedControl__DataItem*>*>  dataItems)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControl*>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::__IconSegmentedControl__DataItem*,::Array<::HMUI::__IconSegmentedControl__DataItem*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, dataItems);
}
inline int32_t HMUI::IconSegmentedControl::NumberOfCells()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControl*>::get(),
                            "NumberOfCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::HMUI::SegmentedControlCell* HMUI::IconSegmentedControl::CellForCellNumber(int32_t  cellNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControl*>::get(),
                            "CellForCellNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::SegmentedControlCell*, false>(*this, ___internal_method, cellNumber);
}
inline ::HMUI::IconSegmentedControlCell* HMUI::IconSegmentedControl::InstantiateCell(::UnityEngine::Object*  prefab)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControl*>::get(),
                            "InstantiateCell",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::IconSegmentedControlCell*, false>(*this, ___internal_method, prefab);
}
inline ::HMUI::IconSegmentedControl* HMUI::IconSegmentedControl::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::IconSegmentedControl*>());
}
inline void HMUI::IconSegmentedControl::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControl*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
