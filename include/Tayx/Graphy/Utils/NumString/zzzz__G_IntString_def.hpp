#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(G_IntString)
// Forward declare root types
namespace Tayx::Graphy::Utils::NumString {
class G_IntString;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::Utils::NumString::G_IntString);
// Type: Tayx.Graphy.Utils.NumString::G_IntString
namespace Tayx::Graphy::Utils::NumString {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15073))
// CS Name: ::Tayx.Graphy.Utils.NumString::G_IntString*
class CORDL_TYPE G_IntString : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_m_negativeBuffer(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF_m_negativeBuffer() ;

static inline void setStaticF_m_positiveBuffer(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF_m_positiveBuffer() ;

/// @brief Method get_MinValue addr 0x2a07164 size 0x6c virtual false final false
static inline int32_t get_MinValue() ;

/// @brief Method get_MaxValue addr 0x2a071d0 size 0x64 virtual false final false
static inline int32_t get_MaxValue() ;

/// @brief Method Init addr 0x2a07234 size 0x280 virtual false final false
static inline void Init(int32_t  minNegativeValue, int32_t  maxPositiveValue) ;

/// @brief Method Dispose addr 0x2a02d4c size 0x98 virtual false final false
static inline void Dispose() ;

/// @brief Method ToStringNonAlloc addr 0x2a074b4 size 0x120 virtual false final false
static inline ::StringW ToStringNonAlloc(int32_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "G_IntString", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
G_IntString(G_IntString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "G_IntString", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
G_IntString(G_IntString const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 G_IntString()  = default;
public:


// Fields

// Static field m_negativeBuffer

// Static field m_positiveBuffer


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Utils::NumString::G_IntString, 0x10>, "Size mismatch!");

} // namespace end def Tayx::Graphy::Utils::NumString
NEED_NO_BOX(::Tayx::Graphy::Utils::NumString::G_IntString);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Utils::NumString::G_IntString*, "Tayx.Graphy.Utils.NumString", "G_IntString");
