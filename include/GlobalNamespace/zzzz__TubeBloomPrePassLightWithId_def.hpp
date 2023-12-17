#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TubeBloomPrePassLightWithId)
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class TubeBloomPrePassLightWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TubeBloomPrePassLightWithId);
// Type: ::TubeBloomPrePassLightWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14542))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14558))
// CS Name: ::TubeBloomPrePassLightWithId*
class CORDL_TYPE TubeBloomPrePassLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::GlobalNamespace::LightWithIdMonoBehaviour)]{};

/// @brief Field _tubeBloomPrePassLight offset 0x30
 __declspec(property(get=__get__tubeBloomPrePassLight, put=__set__tubeBloomPrePassLight)) ::GlobalNamespace::TubeBloomPrePassLight*  _tubeBloomPrePassLight;

/// @brief Field _setOnlyOnce offset 0x38
 __declspec(property(get=__get__setOnlyOnce, put=__set__setOnlyOnce)) bool  _setOnlyOnce;

/// @brief Field _setColorOnly offset 0x39
 __declspec(property(get=__get__setColorOnly, put=__set__setColorOnly)) bool  _setColorOnly;

 __declspec(property(get=get_color)) ::UnityEngine::Color  color;

constexpr void __set__tubeBloomPrePassLight(::GlobalNamespace::TubeBloomPrePassLight*  value) ;

constexpr ::GlobalNamespace::TubeBloomPrePassLight* __get__tubeBloomPrePassLight() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TubeBloomPrePassLight*> __get__tubeBloomPrePassLight() const;

constexpr void __set__setOnlyOnce(bool  value) ;

constexpr bool& __get__setOnlyOnce() ;

constexpr bool const& __get__setOnlyOnce() const;

constexpr void __set__setColorOnly(bool  value) ;

constexpr bool& __get__setColorOnly() ;

constexpr bool const& __get__setColorOnly() const;

/// @brief Method get_color addr 0x2114030 size 0x20 virtual false final false
inline ::UnityEngine::Color get_color() ;

/// @brief Method ColorWasSet addr 0x2114050 size 0x58 virtual true final false
inline void ColorWasSet(::UnityEngine::Color  color) ;

static inline ::GlobalNamespace::TubeBloomPrePassLightWithId* New_ctor() ;

/// @brief Method .ctor addr 0x21140a8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TubeBloomPrePassLightWithId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TubeBloomPrePassLightWithId(TubeBloomPrePassLightWithId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TubeBloomPrePassLightWithId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TubeBloomPrePassLightWithId(TubeBloomPrePassLightWithId const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TubeBloomPrePassLightWithId()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TubeBloomPrePassLightWithId, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TubeBloomPrePassLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeBloomPrePassLightWithId*, "", "TubeBloomPrePassLightWithId");
