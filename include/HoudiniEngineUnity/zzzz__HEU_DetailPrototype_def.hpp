#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_DetailPrototype)
namespace UnityEngine {
struct Color;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_DetailPrototype;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_DetailPrototype);
// Type: HoudiniEngineUnity::HEU_DetailPrototype
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9956))
// CS Name: ::HoudiniEngineUnity::HEU_DetailPrototype*
class CORDL_TYPE HEU_DetailPrototype : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Object)]{};

/// @brief Field _prototypePrefab offset 0x10
 __declspec(property(get=__get__prototypePrefab, put=__set__prototypePrefab)) ::StringW  _prototypePrefab;

/// @brief Field _prototypeTexture offset 0x18
 __declspec(property(get=__get__prototypeTexture, put=__set__prototypeTexture)) ::StringW  _prototypeTexture;

/// @brief Field _bendFactor offset 0x20
 __declspec(property(get=__get__bendFactor, put=__set__bendFactor)) float_t  _bendFactor;

/// @brief Field _dryColor offset 0x24
 __declspec(property(get=__get__dryColor, put=__set__dryColor)) ::UnityEngine::Color  _dryColor;

/// @brief Field _healthyColor offset 0x34
 __declspec(property(get=__get__healthyColor, put=__set__healthyColor)) ::UnityEngine::Color  _healthyColor;

/// @brief Field _maxHeight offset 0x44
 __declspec(property(get=__get__maxHeight, put=__set__maxHeight)) float_t  _maxHeight;

/// @brief Field _maxWidth offset 0x48
 __declspec(property(get=__get__maxWidth, put=__set__maxWidth)) float_t  _maxWidth;

/// @brief Field _minHeight offset 0x4c
 __declspec(property(get=__get__minHeight, put=__set__minHeight)) float_t  _minHeight;

/// @brief Field _minWidth offset 0x50
 __declspec(property(get=__get__minWidth, put=__set__minWidth)) float_t  _minWidth;

/// @brief Field _noiseSpread offset 0x54
 __declspec(property(get=__get__noiseSpread, put=__set__noiseSpread)) float_t  _noiseSpread;

/// @brief Field _renderMode offset 0x58
 __declspec(property(get=__get__renderMode, put=__set__renderMode)) int32_t  _renderMode;

/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailPrototype*>"
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailPrototype*>*() noexcept;

constexpr void __set__prototypePrefab(::StringW  value) ;

constexpr ::StringW& __get__prototypePrefab() ;

constexpr ::StringW const& __get__prototypePrefab() const;

constexpr void __set__prototypeTexture(::StringW  value) ;

constexpr ::StringW& __get__prototypeTexture() ;

constexpr ::StringW const& __get__prototypeTexture() const;

constexpr void __set__bendFactor(float_t  value) ;

constexpr float_t& __get__bendFactor() ;

constexpr float_t const& __get__bendFactor() const;

constexpr void __set__dryColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__dryColor() ;

constexpr ::UnityEngine::Color const& __get__dryColor() const;

constexpr void __set__healthyColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__healthyColor() ;

constexpr ::UnityEngine::Color const& __get__healthyColor() const;

constexpr void __set__maxHeight(float_t  value) ;

constexpr float_t& __get__maxHeight() ;

constexpr float_t const& __get__maxHeight() const;

constexpr void __set__maxWidth(float_t  value) ;

constexpr float_t& __get__maxWidth() ;

constexpr float_t const& __get__maxWidth() const;

constexpr void __set__minHeight(float_t  value) ;

constexpr float_t& __get__minHeight() ;

constexpr float_t const& __get__minHeight() const;

constexpr void __set__minWidth(float_t  value) ;

constexpr float_t& __get__minWidth() ;

constexpr float_t const& __get__minWidth() const;

constexpr void __set__noiseSpread(float_t  value) ;

constexpr float_t& __get__noiseSpread() ;

constexpr float_t const& __get__noiseSpread() const;

constexpr void __set__renderMode(int32_t  value) ;

constexpr int32_t& __get__renderMode() ;

constexpr int32_t const& __get__renderMode() const;

static inline ::HoudiniEngineUnity::HEU_DetailPrototype* New_ctor() ;

/// @brief Method .ctor addr 0x21ea814 size 0xfc virtual false final false
inline void _ctor() ;

/// @brief Method IsEquivalentTo addr 0x21ea910 size 0xec virtual true final true
inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_DetailPrototype*  other) ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_DetailPrototype", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_DetailPrototype(HEU_DetailPrototype && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_DetailPrototype", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_DetailPrototype(HEU_DetailPrototype const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_DetailPrototype()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_DetailPrototype, 0x60>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_DetailPrototype);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_DetailPrototype*, "HoudiniEngineUnity", "HEU_DetailPrototype");
