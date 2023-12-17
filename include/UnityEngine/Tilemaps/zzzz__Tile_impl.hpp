#pragma once
#include "UnityEngine/Tilemaps/zzzz__TileBase_impl.hpp"
#include "UnityEngine/Tilemaps/zzzz__Tile_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileData_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__Tile_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__ITilemap_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileFlags_def.hpp"
constexpr void UnityEngine::Tilemaps::__Tile__ColliderType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Tilemaps::__Tile__ColliderType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Tilemaps::__Tile__ColliderType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Tilemaps::__Tile__ColliderType::__Tile__ColliderType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Tilemaps::__Tile__ColliderType  UnityEngine::Tilemaps::__Tile__ColliderType::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Tilemaps::__Tile__ColliderType  UnityEngine::Tilemaps::__Tile__ColliderType::Sprite{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Tilemaps::__Tile__ColliderType  UnityEngine::Tilemaps::__Tile__ColliderType::Grid{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.get_sprite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite* (::UnityEngine::Tilemaps::Tile::*)()>(&::UnityEngine::Tilemaps::Tile::get_sprite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d50500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                            "get_sprite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.set_sprite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tile::*)(::UnityEngine::Sprite*)>(&::UnityEngine::Tilemaps::Tile::set_sprite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d50508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                            "set_sprite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.get_color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::UnityEngine::Tilemaps::Tile::*)()>(&::UnityEngine::Tilemaps::Tile::get_color)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d50510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.set_color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tile::*)(::UnityEngine::Color)>(&::UnityEngine::Tilemaps::Tile::set_color)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d5051c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                            "set_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.get_transform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Tilemaps::Tile::*)()>(&::UnityEngine::Tilemaps::Tile::get_transform)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d50528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                            "get_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.set_transform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tile::*)(::UnityEngine::Matrix4x4)>(&::UnityEngine::Tilemaps::Tile::set_transform)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d5053c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                            "set_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.get_gameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::UnityEngine::Tilemaps::Tile::*)()>(&::UnityEngine::Tilemaps::Tile::get_gameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d50550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                            "get_gameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.set_gameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tile::*)(::UnityEngine::GameObject*)>(&::UnityEngine::Tilemaps::Tile::set_gameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d50558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                            "set_gameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.get_flags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Tilemaps::TileFlags (::UnityEngine::Tilemaps::Tile::*)()>(&::UnityEngine::Tilemaps::Tile::get_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d50560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                            "get_flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.set_flags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tile::*)(::UnityEngine::Tilemaps::TileFlags)>(&::UnityEngine::Tilemaps::Tile::set_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d50568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                            "set_flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::TileFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.get_colliderType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Tilemaps::__Tile__ColliderType (::UnityEngine::Tilemaps::Tile::*)()>(&::UnityEngine::Tilemaps::Tile::get_colliderType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d50570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                            "get_colliderType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.set_colliderType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tile::*)(::UnityEngine::Tilemaps::__Tile__ColliderType)>(&::UnityEngine::Tilemaps::Tile::set_colliderType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d50578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                            "set_colliderType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::__Tile__ColliderType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.GetTileData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tile::*)(::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ByRef<::UnityEngine::Tilemaps::TileData>)>(&::UnityEngine::Tilemaps::Tile::GetTileData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d50580;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tile::*)()>(&::UnityEngine::Tilemaps::Tile::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d505dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Tilemaps::Tile::__set_m_Sprite(::UnityEngine::Sprite*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Sprite*, 0x18>(this, std::forward<::UnityEngine::Sprite*>(value));
}
constexpr ::UnityEngine::Sprite* UnityEngine::Tilemaps::Tile::__get_m_Sprite()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Sprite*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> UnityEngine::Tilemaps::Tile::__get_m_Sprite() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Sprite*, 0x18>(this);
}
constexpr void UnityEngine::Tilemaps::Tile::__set_m_Color(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x20>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& UnityEngine::Tilemaps::Tile::__get_m_Color()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x20>(this);
}
constexpr ::UnityEngine::Color const& UnityEngine::Tilemaps::Tile::__get_m_Color() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x20>(this);
}
constexpr void UnityEngine::Tilemaps::Tile::__set_m_Transform(::UnityEngine::Matrix4x4  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Matrix4x4, 0x30>(this, std::forward<::UnityEngine::Matrix4x4>(value));
}
constexpr ::UnityEngine::Matrix4x4& UnityEngine::Tilemaps::Tile::__get_m_Transform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Matrix4x4, 0x30>(this);
}
constexpr ::UnityEngine::Matrix4x4 const& UnityEngine::Tilemaps::Tile::__get_m_Transform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Matrix4x4, 0x30>(this);
}
constexpr void UnityEngine::Tilemaps::Tile::__set_m_InstancedGameObject(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x70>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* UnityEngine::Tilemaps::Tile::__get_m_InstancedGameObject()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> UnityEngine::Tilemaps::Tile::__get_m_InstancedGameObject() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x70>(this);
}
constexpr void UnityEngine::Tilemaps::Tile::__set_m_Flags(::UnityEngine::Tilemaps::TileFlags  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Tilemaps::TileFlags, 0x78>(this, std::forward<::UnityEngine::Tilemaps::TileFlags>(value));
}
constexpr ::UnityEngine::Tilemaps::TileFlags& UnityEngine::Tilemaps::Tile::__get_m_Flags()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Tilemaps::TileFlags, 0x78>(this);
}
constexpr ::UnityEngine::Tilemaps::TileFlags const& UnityEngine::Tilemaps::Tile::__get_m_Flags() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Tilemaps::TileFlags, 0x78>(this);
}
constexpr void UnityEngine::Tilemaps::Tile::__set_m_ColliderType(::UnityEngine::Tilemaps::__Tile__ColliderType  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Tilemaps::__Tile__ColliderType, 0x7c>(this, std::forward<::UnityEngine::Tilemaps::__Tile__ColliderType>(value));
}
constexpr ::UnityEngine::Tilemaps::__Tile__ColliderType& UnityEngine::Tilemaps::Tile::__get_m_ColliderType()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Tilemaps::__Tile__ColliderType, 0x7c>(this);
}
constexpr ::UnityEngine::Tilemaps::__Tile__ColliderType const& UnityEngine::Tilemaps::Tile::__get_m_ColliderType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Tilemaps::__Tile__ColliderType, 0x7c>(this);
}
inline ::UnityEngine::Sprite* UnityEngine::Tilemaps::Tile::get_sprite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                            "get_sprite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Sprite*, false>(*this, ___internal_method);
}
inline void UnityEngine::Tilemaps::Tile::set_sprite(::UnityEngine::Sprite*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                            "set_sprite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Color UnityEngine::Tilemaps::Tile::get_color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
inline void UnityEngine::Tilemaps::Tile::set_color(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                            "set_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Tilemaps::Tile::get_transform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                            "get_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(*this, ___internal_method);
}
inline void UnityEngine::Tilemaps::Tile::set_transform(::UnityEngine::Matrix4x4  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                            "set_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::GameObject* UnityEngine::Tilemaps::Tile::get_gameObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                            "get_gameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(*this, ___internal_method);
}
inline void UnityEngine::Tilemaps::Tile::set_gameObject(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                            "set_gameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Tilemaps::TileFlags UnityEngine::Tilemaps::Tile::get_flags()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                            "get_flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Tilemaps::TileFlags, false>(*this, ___internal_method);
}
inline void UnityEngine::Tilemaps::Tile::set_flags(::UnityEngine::Tilemaps::TileFlags  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                            "set_flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::TileFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Tilemaps::__Tile__ColliderType UnityEngine::Tilemaps::Tile::get_colliderType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                            "get_colliderType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Tilemaps::__Tile__ColliderType, false>(*this, ___internal_method);
}
inline void UnityEngine::Tilemaps::Tile::set_colliderType(::UnityEngine::Tilemaps::__Tile__ColliderType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                            "set_colliderType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::__Tile__ColliderType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::Tilemaps::Tile::GetTileData(::UnityEngine::Vector3Int  position, ::UnityEngine::Tilemaps::ITilemap*  tilemap, ByRef<::UnityEngine::Tilemaps::TileData>  tileData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                            "GetTileData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::ITilemap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Tilemaps::TileData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, position, tilemap, tileData);
}
inline ::UnityEngine::Tilemaps::Tile* UnityEngine::Tilemaps::Tile::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Tilemaps::Tile*>());
}
inline void UnityEngine::Tilemaps::Tile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
