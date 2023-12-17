#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AlphaFloatFxGroupEffectTarget)
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class AlphaFloatFxGroupEffectTarget;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AlphaFloatFxGroupEffectTarget);
// Type: ::AlphaFloatFxGroupEffectTarget
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4909))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4902))
// CS Name: ::AlphaFloatFxGroupEffectTarget*
class CORDL_TYPE AlphaFloatFxGroupEffectTarget : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::GlobalNamespace::FloatFxGroupEffectTarget)]{};

/// @brief Field _staticColor offset 0x18
 __declspec(property(get=__get__staticColor, put=__set__staticColor)) ::UnityEngine::Color  _staticColor;

/// @brief Field _property offset 0x28
 __declspec(property(get=__get__property, put=__set__property)) ::StringW  _property;

/// @brief Field _materialPropertyBlockControllers offset 0x30
 __declspec(property(get=__get__materialPropertyBlockControllers, put=__set__materialPropertyBlockControllers)) ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>  _materialPropertyBlockControllers;

/// @brief Field _propertyId offset 0x38
 __declspec(property(get=__get__propertyId, put=__set__propertyId)) int32_t  _propertyId;

/// @brief Field _isInitialized offset 0x3c
 __declspec(property(get=__get__isInitialized, put=__set__isInitialized)) bool  _isInitialized;

constexpr void __set__staticColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__staticColor() ;

constexpr ::UnityEngine::Color const& __get__staticColor() const;

constexpr void __set__property(::StringW  value) ;

constexpr ::StringW& __get__property() ;

constexpr ::StringW const& __get__property() const;

constexpr void __set__materialPropertyBlockControllers(::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>& __get__materialPropertyBlockControllers() ;

constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> const& __get__materialPropertyBlockControllers() const;

constexpr void __set__propertyId(int32_t  value) ;

constexpr int32_t& __get__propertyId() ;

constexpr int32_t const& __get__propertyId() const;

constexpr void __set__isInitialized(bool  value) ;

constexpr bool& __get__isInitialized() ;

constexpr bool const& __get__isInitialized() const;

/// @brief Method Awake addr 0x23a5684 size 0x30 virtual false final false
inline void Awake() ;

/// @brief Method InitIfNeeded addr 0x23a56b4 size 0x30 virtual false final false
inline void InitIfNeeded() ;

/// @brief Method SetValue addr 0x23a56e4 size 0x18 virtual true final false
inline void SetValue(float_t  value) ;

/// @brief Method TriggerValue addr 0x23a57d8 size 0x18 virtual true final false
inline void TriggerValue(float_t  value) ;

/// @brief Method SetColor addr 0x23a56fc size 0xdc virtual false final false
inline void SetColor(::UnityEngine::Color  color) ;

static inline ::GlobalNamespace::AlphaFloatFxGroupEffectTarget* New_ctor() ;

/// @brief Method .ctor addr 0x23a57f0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AlphaFloatFxGroupEffectTarget", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AlphaFloatFxGroupEffectTarget(AlphaFloatFxGroupEffectTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AlphaFloatFxGroupEffectTarget", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AlphaFloatFxGroupEffectTarget(AlphaFloatFxGroupEffectTarget const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AlphaFloatFxGroupEffectTarget()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AlphaFloatFxGroupEffectTarget, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AlphaFloatFxGroupEffectTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AlphaFloatFxGroupEffectTarget*, "", "AlphaFloatFxGroupEffectTarget");
