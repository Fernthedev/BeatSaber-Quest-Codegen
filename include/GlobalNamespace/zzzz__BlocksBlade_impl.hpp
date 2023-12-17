#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BlocksBlade_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "GlobalNamespace/zzzz__BlocksBlade_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BlocksBlade__Element._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BlocksBlade__Element::*)()>(&::GlobalNamespace::__BlocksBlade__Element::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2261abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BlocksBlade__Element*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__BlocksBlade__Element::__set_idx(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BlocksBlade__Element::__get_idx()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__BlocksBlade__Element::__get_idx() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__BlocksBlade__Element::__set_velocity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__BlocksBlade__Element::__get_velocity()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& GlobalNamespace::__BlocksBlade__Element::__get_velocity() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
inline ::GlobalNamespace::__BlocksBlade__Element* GlobalNamespace::__BlocksBlade__Element::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BlocksBlade__Element*>());
}
inline void GlobalNamespace::__BlocksBlade__Element::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BlocksBlade__Element*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::BlocksBlade.get_color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::BlocksBlade::*)()>(&::GlobalNamespace::BlocksBlade::get_color)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x226186c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlocksBlade*>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlocksBlade.set_color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlocksBlade::*)(::UnityEngine::Color)>(&::GlobalNamespace::BlocksBlade::set_color)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2261878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlocksBlade*>::get(),
                            "set_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlocksBlade.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlocksBlade::*)()>(&::GlobalNamespace::BlocksBlade::Start)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x2261884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlocksBlade*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlocksBlade.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlocksBlade::*)()>(&::GlobalNamespace::BlocksBlade::Update)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x2261c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlocksBlade*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlocksBlade.SetUpElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlocksBlade::*)(::GlobalNamespace::__BlocksBlade__Element*, float_t, ::UnityEngine::Color)>(&::GlobalNamespace::BlocksBlade::SetUpElement)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2261ac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlocksBlade*>::get(),
                            "SetUpElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BlocksBlade__Element*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlocksBlade.RandomPointOnCircle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::BlocksBlade::*)(float_t)>(&::GlobalNamespace::BlocksBlade::RandomPointOnCircle)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2262080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlocksBlade*>::get(),
                            "RandomPointOnCircle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlocksBlade._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlocksBlade::*)()>(&::GlobalNamespace::BlocksBlade::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x22620cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlocksBlade*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BlocksBlade::__set__elementMesh(::UnityEngine::Mesh*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Mesh*, 0x18>(this, std::forward<::UnityEngine::Mesh*>(value));
}
constexpr ::UnityEngine::Mesh* GlobalNamespace::BlocksBlade::__get__elementMesh()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Mesh*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> GlobalNamespace::BlocksBlade::__get__elementMesh() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Mesh*, 0x18>(this);
}
constexpr void GlobalNamespace::BlocksBlade::__set__material(::UnityEngine::Material*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material*, 0x20>(this, std::forward<::UnityEngine::Material*>(value));
}
constexpr ::UnityEngine::Material* GlobalNamespace::BlocksBlade::__get__material()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> GlobalNamespace::BlocksBlade::__get__material() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x20>(this);
}
constexpr void GlobalNamespace::BlocksBlade::__set__numberOfElements(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::BlocksBlade::__get__numberOfElements()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& GlobalNamespace::BlocksBlade::__get__numberOfElements() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void GlobalNamespace::BlocksBlade::__set__radius(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BlocksBlade::__get__radius()  {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr float_t const& GlobalNamespace::BlocksBlade::__get__radius() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr void GlobalNamespace::BlocksBlade::__set__length(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BlocksBlade::__get__length()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::BlocksBlade::__get__length() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void GlobalNamespace::BlocksBlade::__set__minVelocity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BlocksBlade::__get__minVelocity()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& GlobalNamespace::BlocksBlade::__get__minVelocity() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr void GlobalNamespace::BlocksBlade::__set__maxVelocity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BlocksBlade::__get__maxVelocity()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& GlobalNamespace::BlocksBlade::__get__maxVelocity() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr void GlobalNamespace::BlocksBlade::__set__elementWidth(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BlocksBlade::__get__elementWidth()  {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr float_t const& GlobalNamespace::BlocksBlade::__get__elementWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr void GlobalNamespace::BlocksBlade::__set__minElementLength(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BlocksBlade::__get__minElementLength()  {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr float_t const& GlobalNamespace::BlocksBlade::__get__minElementLength() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr void GlobalNamespace::BlocksBlade::__set__maxElementLength(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BlocksBlade::__get__maxElementLength()  {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr float_t const& GlobalNamespace::BlocksBlade::__get__maxElementLength() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr void GlobalNamespace::BlocksBlade::__set__color_k__BackingField(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x48>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::BlocksBlade::__get__color_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x48>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::BlocksBlade::__get__color_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x48>(this);
}
constexpr void GlobalNamespace::BlocksBlade::__set__elements(::System::Collections::Generic::List_1<::GlobalNamespace::__BlocksBlade__Element*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__BlocksBlade__Element*>*, 0x58>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__BlocksBlade__Element*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__BlocksBlade__Element*>* GlobalNamespace::BlocksBlade::__get__elements()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__BlocksBlade__Element*>*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__BlocksBlade__Element*>*> GlobalNamespace::BlocksBlade::__get__elements() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__BlocksBlade__Element*>*, 0x58>(this);
}
constexpr void GlobalNamespace::BlocksBlade::__set__positions(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0x60>(this, std::forward<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>& GlobalNamespace::BlocksBlade::__get__positions()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0x60>(this);
}
constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> const& GlobalNamespace::BlocksBlade::__get__positions() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0x60>(this);
}
constexpr void GlobalNamespace::BlocksBlade::__set__sizes(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0x68>(this, std::forward<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>& GlobalNamespace::BlocksBlade::__get__sizes()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0x68>(this);
}
constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> const& GlobalNamespace::BlocksBlade::__get__sizes() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0x68>(this);
}
constexpr void GlobalNamespace::BlocksBlade::__set__colors(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0x70>(this, std::forward<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>& GlobalNamespace::BlocksBlade::__get__colors()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0x70>(this);
}
constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> const& GlobalNamespace::BlocksBlade::__get__colors() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0x70>(this);
}
constexpr void GlobalNamespace::BlocksBlade::__set__matrices(::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>, 0x78>(this, std::forward<::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>& GlobalNamespace::BlocksBlade::__get__matrices()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>, 0x78>(this);
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*> const& GlobalNamespace::BlocksBlade::__get__matrices() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>, 0x78>(this);
}
constexpr void GlobalNamespace::BlocksBlade::__set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::MaterialPropertyBlock*, 0x80>(this, std::forward<::UnityEngine::MaterialPropertyBlock*>(value));
}
constexpr ::UnityEngine::MaterialPropertyBlock* GlobalNamespace::BlocksBlade::__get__materialPropertyBlock()  {
return ::cordl_internals::getInstanceField<::UnityEngine::MaterialPropertyBlock*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> GlobalNamespace::BlocksBlade::__get__materialPropertyBlock() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MaterialPropertyBlock*, 0x80>(this);
}
inline void GlobalNamespace::BlocksBlade::setStaticF__positionPropertyID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_positionPropertyID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlocksBlade*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BlocksBlade::getStaticF__positionPropertyID()  {
return ::cordl_internals::getStaticField<int32_t, "_positionPropertyID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlocksBlade*>::get>();
}
inline void GlobalNamespace::BlocksBlade::setStaticF__sizePropertyID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_sizePropertyID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlocksBlade*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BlocksBlade::getStaticF__sizePropertyID()  {
return ::cordl_internals::getStaticField<int32_t, "_sizePropertyID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlocksBlade*>::get>();
}
inline void GlobalNamespace::BlocksBlade::setStaticF__colorPropertyID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_colorPropertyID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlocksBlade*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BlocksBlade::getStaticF__colorPropertyID()  {
return ::cordl_internals::getStaticField<int32_t, "_colorPropertyID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlocksBlade*>::get>();
}
inline void GlobalNamespace::BlocksBlade::setStaticF__zClipPropertyID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_zClipPropertyID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlocksBlade*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BlocksBlade::getStaticF__zClipPropertyID()  {
return ::cordl_internals::getStaticField<int32_t, "_zClipPropertyID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlocksBlade*>::get>();
}
constexpr void GlobalNamespace::BlocksBlade::__set__layer(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x88>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::BlocksBlade::__get__layer()  {
return ::cordl_internals::getInstanceField<int32_t, 0x88>(this);
}
constexpr int32_t const& GlobalNamespace::BlocksBlade::__get__layer() const {
return ::cordl_internals::getInstanceField<int32_t, 0x88>(this);
}
inline ::UnityEngine::Color GlobalNamespace::BlocksBlade::get_color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlocksBlade*>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BlocksBlade::set_color(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlocksBlade*>::get(),
                            "set_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::BlocksBlade::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlocksBlade*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BlocksBlade::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlocksBlade*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BlocksBlade::SetUpElement(::GlobalNamespace::__BlocksBlade__Element*  element, float_t  velocity, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlocksBlade*>::get(),
                            "SetUpElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BlocksBlade__Element*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, element, velocity, color);
}
inline ::UnityEngine::Vector2 GlobalNamespace::BlocksBlade::RandomPointOnCircle(float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlocksBlade*>::get(),
                            "RandomPointOnCircle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method, radius);
}
inline ::GlobalNamespace::BlocksBlade* GlobalNamespace::BlocksBlade::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BlocksBlade*>());
}
inline void GlobalNamespace::BlocksBlade::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlocksBlade*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
