#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(MathfInternal)
// Forward declare root types
namespace UnityEngineInternal {
struct MathfInternal;
}
// Write type traits
MARK_VAL_T(::UnityEngineInternal::MathfInternal);
// Type: UnityEngineInternal::MathfInternal
namespace UnityEngineInternal {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9964))
// CS Name: ::UnityEngineInternal::MathfInternal
struct CORDL_TYPE MathfInternal : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_FloatMinNormal(float_t  value) ;

static inline float_t getStaticF_FloatMinNormal() ;

static inline void setStaticF_FloatMinDenormal(float_t  value) ;

static inline float_t getStaticF_FloatMinDenormal() ;

static inline void setStaticF_IsFlushToZeroEnabled(bool  value) ;

static inline bool getStaticF_IsFlushToZeroEnabled() ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MathfInternal(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MathfInternal()  = default;


// Fields

// Static field FloatMinNormal

// Static field FloatMinDenormal

// Static field IsFlushToZeroEnabled


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngineInternal::MathfInternal, 0x1>, "Size mismatch!");

} // namespace end def UnityEngineInternal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::MathfInternal, "UnityEngineInternal", "MathfInternal");
