#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FxBaseData_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatFxBaseData)
namespace GlobalNamespace {
struct EaseType;
}
// Forward declare root types
namespace GlobalNamespace {
class FloatFxBaseData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatFxBaseData);
// Type: ::FloatFxBaseData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4312))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4314))
// CS Name: ::FloatFxBaseData*
class CORDL_TYPE FloatFxBaseData : public ::GlobalNamespace::FxBaseData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::FxBaseData)]{};

/// @brief Field value offset 0x18
 __declspec(property(get=__get_value, put=__set_value)) float_t  value;

/// @brief Field easeType offset 0x1c
 __declspec(property(get=__get_easeType, put=__set_easeType)) ::GlobalNamespace::EaseType  easeType;

constexpr void __set_value(float_t  value) ;

constexpr float_t& __get_value() ;

constexpr float_t const& __get_value() const;

constexpr void __set_easeType(::GlobalNamespace::EaseType  value) ;

constexpr ::GlobalNamespace::EaseType& __get_easeType() ;

constexpr ::GlobalNamespace::EaseType const& __get_easeType() const;

static inline ::GlobalNamespace::FloatFxBaseData* New_ctor(float_t  beat, bool  usePreviousEventValue, float_t  value, ::GlobalNamespace::EaseType  easeType) ;

/// @brief Method .ctor addr 0x233602c size 0x48 virtual false final false
inline void _ctor(float_t  beat, bool  usePreviousEventValue, float_t  value, ::GlobalNamespace::EaseType  easeType) ;

// Ctor Parameters [CppParam { name: "", ty: "FloatFxBaseData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatFxBaseData(FloatFxBaseData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatFxBaseData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatFxBaseData(FloatFxBaseData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FloatFxBaseData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatFxBaseData, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatFxBaseData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatFxBaseData*, "", "FloatFxBaseData");
