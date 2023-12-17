#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassNonLightPass_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassBackgroundNonLightInstancedGroupRenderer)
namespace GlobalNamespace {
struct __BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector4;
}
namespace GlobalNamespace {
class BloomPrePassBackgroundNonLightRenderer;
}
namespace GlobalNamespace {
class __BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
struct __BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType;
}
namespace GlobalNamespace {
class BloomPrePassBackgroundNonLightInstancedGroupRenderer;
}
namespace GlobalNamespace {
class __BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType);
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer);
MARK_REF_PTR_T(::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty);
// Type: ::SupportedProperty
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14461))
// CS Name: ::BloomPrePassBackgroundNonLightInstancedGroupRenderer::SupportedProperty*
class CORDL_TYPE __BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field propertyType offset 0x10
 __declspec(property(get=__get_propertyType, put=__set_propertyType)) ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType  propertyType;

/// @brief Field propertyName offset 0x18
 __declspec(property(get=__get_propertyName, put=__set_propertyName)) ::StringW  propertyName;

/// @brief Field propertyId offset 0x20
 __declspec(property(get=__get_propertyId, put=__set_propertyId)) int32_t  propertyId;

constexpr void __set_propertyType(::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType  value) ;

constexpr ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType& __get_propertyType() ;

constexpr ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType const& __get_propertyType() const;

constexpr void __set_propertyName(::StringW  value) ;

constexpr ::StringW& __get_propertyName() ;

constexpr ::StringW const& __get_propertyName() const;

constexpr void __set_propertyId(int32_t  value) ;

constexpr int32_t& __get_propertyId() ;

constexpr int32_t const& __get_propertyId() const;

static inline ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty* New_ctor() ;

/// @brief Method .ctor addr 0x210583c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty(__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty(__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::PropertyType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14462))
// CS Name: ::BloomPrePassBackgroundNonLightInstancedGroupRenderer::PropertyType
struct CORDL_TYPE __BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType_Unwrapped
enum struct ____BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType_Unwrapped : int32_t {
__E_Float = static_cast<int32_t>(0x0),
__E_Vector = static_cast<int32_t>(0x1),
__E_Color = static_cast<int32_t>(0x2),
__E_Matrix4x4 = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Float value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType const Float;

/// @brief Field Vector value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType const Vector;

/// @brief Field Color value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType const Color;

/// @brief Field Matrix4x4 value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType const Matrix4x4;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType_Unwrapped () const noexcept {
return std::bit_cast<____BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BloomPrePassBackgroundNonLightInstancedGroupRenderer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14478))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14463))
// CS Name: ::BloomPrePassBackgroundNonLightInstancedGroupRenderer*
class CORDL_TYPE BloomPrePassBackgroundNonLightInstancedGroupRenderer : public ::GlobalNamespace::BloomPrePassNonLightPass {
public:
// Declarations
using PropertyType = ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType;

using SupportedProperty = ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::GlobalNamespace::BloomPrePassNonLightPass)]{};

/// @brief Field kInternalMatricesCachingId offset 0x0
static constexpr ::ConstString  kInternalMatricesCachingId{u"INTERNAL_MATRICES"};

/// @brief Field _renderers offset 0x20
 __declspec(property(get=__get__renderers, put=__set__renderers)) ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*,::Array<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*>*>  _renderers;

/// @brief Field _supportedProperties offset 0x28
 __declspec(property(get=__get__supportedProperties, put=__set__supportedProperties)) ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*,::Array<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*>*>  _supportedProperties;

/// @brief Field _reusableFloatArrays offset 0x30
 __declspec(property(get=__get__reusableFloatArrays, put=__set__reusableFloatArrays)) ::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<float_t,::Array<float_t>*>>*  _reusableFloatArrays;

/// @brief Field _reusableVectorArrays offset 0x38
 __declspec(property(get=__get__reusableVectorArrays, put=__set__reusableVectorArrays)) ::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>>*  _reusableVectorArrays;

/// @brief Field _reusableMatrixArrays offset 0x40
 __declspec(property(get=__get__reusableMatrixArrays, put=__set__reusableMatrixArrays)) ::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>>*  _reusableMatrixArrays;

/// @brief Field _reusableArraysSize offset 0x48
 __declspec(property(get=__get__reusableArraysSize, put=__set__reusableArraysSize)) int32_t  _reusableArraysSize;

/// @brief Field _commandBuffer offset 0x50
 __declspec(property(get=__get__commandBuffer, put=__set__commandBuffer)) ::UnityEngine::Rendering::CommandBuffer*  _commandBuffer;

/// @brief Field _reusableSetMaterialPropertyBlock offset 0x58
 __declspec(property(get=__get__reusableSetMaterialPropertyBlock, put=__set__reusableSetMaterialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  _reusableSetMaterialPropertyBlock;

/// @brief Field _reusableGetMaterialPropertyBlock offset 0x60
 __declspec(property(get=__get__reusableGetMaterialPropertyBlock, put=__set__reusableGetMaterialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  _reusableGetMaterialPropertyBlock;

constexpr void __set__renderers(::ArrayW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*,::Array<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*,::Array<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*>*>& __get__renderers() ;

constexpr ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*,::Array<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*>*> const& __get__renderers() const;

constexpr void __set__supportedProperties(::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*,::Array<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*,::Array<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*>*>& __get__supportedProperties() ;

constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*,::Array<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*>*> const& __get__supportedProperties() const;

static inline void setStaticF__worldSpaceCameraPosID(int32_t  value) ;

static inline int32_t getStaticF__worldSpaceCameraPosID() ;

constexpr void __set__reusableFloatArrays(::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<float_t,::Array<float_t>*>>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<float_t,::Array<float_t>*>>* __get__reusableFloatArrays() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<float_t,::Array<float_t>*>>*> __get__reusableFloatArrays() const;

constexpr void __set__reusableVectorArrays(::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>>* __get__reusableVectorArrays() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>>*> __get__reusableVectorArrays() const;

constexpr void __set__reusableMatrixArrays(::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>>* __get__reusableMatrixArrays() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>>*> __get__reusableMatrixArrays() const;

constexpr void __set__reusableArraysSize(int32_t  value) ;

constexpr int32_t& __get__reusableArraysSize() ;

constexpr int32_t const& __get__reusableArraysSize() const;

constexpr void __set__commandBuffer(::UnityEngine::Rendering::CommandBuffer*  value) ;

constexpr ::UnityEngine::Rendering::CommandBuffer* __get__commandBuffer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> __get__commandBuffer() const;

constexpr void __set__reusableSetMaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr ::UnityEngine::MaterialPropertyBlock* __get__reusableSetMaterialPropertyBlock() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> __get__reusableSetMaterialPropertyBlock() const;

constexpr void __set__reusableGetMaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr ::UnityEngine::MaterialPropertyBlock* __get__reusableGetMaterialPropertyBlock() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> __get__reusableGetMaterialPropertyBlock() const;

/// @brief Method Awake addr 0x2104a78 size 0x4 virtual false final false
inline void Awake() ;

/// @brief Method InitIfNeeded addr 0x2104a7c size 0x258 virtual false final false
inline void InitIfNeeded() ;

/// @brief Method Render addr 0x2104d04 size 0x6c4 virtual true final false
inline void Render(::UnityEngine::RenderTexture*  dest, ::UnityEngine::Matrix4x4  viewMatrix, ::UnityEngine::Matrix4x4  projectionMatrix) ;

/// @brief Method GetCachedMatrixArray addr 0x21053c8 size 0xdc virtual false final false
inline ::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*> GetCachedMatrixArray(::StringW  propertyName) ;

/// @brief Method GetCachedFloatArray addr 0x2105580 size 0xdc virtual false final false
inline ::ArrayW<float_t,::Array<float_t>*> GetCachedFloatArray(::StringW  propertyName) ;

/// @brief Method GetCachedVectorArray addr 0x21054a4 size 0xdc virtual false final false
inline ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> GetCachedVectorArray(::StringW  propertyName) ;

/// @brief Method AutoFillRenderers addr 0x210565c size 0x50 virtual false final false
inline void AutoFillRenderers() ;

static inline ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer* New_ctor() ;

/// @brief Method .ctor addr 0x21056ac size 0x128 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundNonLightInstancedGroupRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BloomPrePassBackgroundNonLightInstancedGroupRenderer(BloomPrePassBackgroundNonLightInstancedGroupRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundNonLightInstancedGroupRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BloomPrePassBackgroundNonLightInstancedGroupRenderer(BloomPrePassBackgroundNonLightInstancedGroupRenderer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BloomPrePassBackgroundNonLightInstancedGroupRenderer()  = default;
public:


// Fields

// Static field _worldSpaceCameraPosID


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer, 0x68>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType, "", "BloomPrePassBackgroundNonLightInstancedGroupRenderer/PropertyType");
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*, "", "BloomPrePassBackgroundNonLightInstancedGroupRenderer");
NEED_NO_BOX(::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*, "", "BloomPrePassBackgroundNonLightInstancedGroupRenderer/SupportedProperty");
