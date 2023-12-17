#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebuggableAttribute)
namespace System::Diagnostics {
struct __DebuggableAttribute__DebuggingModes;
}
// Forward declare root types
namespace System::Diagnostics {
struct __DebuggableAttribute__DebuggingModes;
}
namespace System::Diagnostics {
class DebuggableAttribute;
}
// Write type traits
MARK_VAL_T(::System::Diagnostics::__DebuggableAttribute__DebuggingModes);
MARK_REF_PTR_T(::System::Diagnostics::DebuggableAttribute);
// Type: ::DebuggingModes
namespace System::Diagnostics {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3732))
// CS Name: ::DebuggableAttribute::DebuggingModes
struct CORDL_TYPE __DebuggableAttribute__DebuggingModes : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____DebuggableAttribute__DebuggingModes_Unwrapped
enum struct ____DebuggableAttribute__DebuggingModes_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Default = static_cast<int32_t>(0x1),
__E_DisableOptimizations = static_cast<int32_t>(0x100),
__E_IgnoreSymbolStoreSequencePoints = static_cast<int32_t>(0x2),
__E_EnableEditAndContinue = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::Diagnostics::__DebuggableAttribute__DebuggingModes const None;

/// @brief Field Default value: static_cast<int32_t>(0x1)
static ::System::Diagnostics::__DebuggableAttribute__DebuggingModes const Default;

/// @brief Field DisableOptimizations value: static_cast<int32_t>(0x100)
static ::System::Diagnostics::__DebuggableAttribute__DebuggingModes const DisableOptimizations;

/// @brief Field IgnoreSymbolStoreSequencePoints value: static_cast<int32_t>(0x2)
static ::System::Diagnostics::__DebuggableAttribute__DebuggingModes const IgnoreSymbolStoreSequencePoints;

/// @brief Field EnableEditAndContinue value: static_cast<int32_t>(0x4)
static ::System::Diagnostics::__DebuggableAttribute__DebuggingModes const EnableEditAndContinue;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____DebuggableAttribute__DebuggingModes_Unwrapped () const noexcept {
return std::bit_cast<____DebuggableAttribute__DebuggingModes_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __DebuggableAttribute__DebuggingModes(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __DebuggableAttribute__DebuggingModes(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __DebuggableAttribute__DebuggingModes()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::__DebuggableAttribute__DebuggingModes, 0x4>, "Size mismatch!");

} // namespace end def System::Diagnostics
// Type: System.Diagnostics::DebuggableAttribute
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3733))
// CS Name: ::System.Diagnostics::DebuggableAttribute*
class CORDL_TYPE DebuggableAttribute : public ::System::Attribute {
public:
// Declarations
using DebuggingModes = ::System::Diagnostics::__DebuggableAttribute__DebuggingModes;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field m_debuggingModes offset 0x10
 __declspec(property(get=__get_m_debuggingModes, put=__set_m_debuggingModes)) ::System::Diagnostics::__DebuggableAttribute__DebuggingModes  m_debuggingModes;

constexpr void __set_m_debuggingModes(::System::Diagnostics::__DebuggableAttribute__DebuggingModes  value) ;

constexpr ::System::Diagnostics::__DebuggableAttribute__DebuggingModes& __get_m_debuggingModes() ;

constexpr ::System::Diagnostics::__DebuggableAttribute__DebuggingModes const& __get_m_debuggingModes() const;

static inline ::System::Diagnostics::DebuggableAttribute* New_ctor(::System::Diagnostics::__DebuggableAttribute__DebuggingModes  modes) ;

/// @brief Method .ctor addr 0x2579c20 size 0x28 virtual false final false
inline void _ctor(::System::Diagnostics::__DebuggableAttribute__DebuggingModes  modes) ;

// Ctor Parameters [CppParam { name: "", ty: "DebuggableAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebuggableAttribute(DebuggableAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebuggableAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebuggableAttribute(DebuggableAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DebuggableAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::DebuggableAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::__DebuggableAttribute__DebuggingModes, "System.Diagnostics", "DebuggableAttribute/DebuggingModes");
NEED_NO_BOX(::System::Diagnostics::DebuggableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::DebuggableAttribute*, "System.Diagnostics", "DebuggableAttribute");
