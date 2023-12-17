#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LingerOption)
// Forward declare root types
namespace System::Net::Sockets {
class LingerOption;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Sockets::LingerOption);
// Type: System.Net.Sockets::LingerOption
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9341))
// CS Name: ::System.Net.Sockets::LingerOption*
class CORDL_TYPE LingerOption : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field enabled offset 0x10
 __declspec(property(get=__get_enabled, put=__set_enabled)) bool  enabled;

/// @brief Field lingerTime offset 0x14
 __declspec(property(get=__get_lingerTime, put=__set_lingerTime)) int32_t  lingerTime;

 __declspec(property(put=set_Enabled)) bool  Enabled;

 __declspec(property(put=set_LingerTime)) int32_t  LingerTime;

constexpr void __set_enabled(bool  value) ;

constexpr bool& __get_enabled() ;

constexpr bool const& __get_enabled() const;

constexpr void __set_lingerTime(int32_t  value) ;

constexpr int32_t& __get_lingerTime() ;

constexpr int32_t const& __get_lingerTime() const;

static inline ::System::Net::Sockets::LingerOption* New_ctor(bool  enable, int32_t  seconds) ;

/// @brief Method .ctor addr 0x28fc630 size 0x34 virtual false final false
inline void _ctor(bool  enable, int32_t  seconds) ;

/// @brief Method set_Enabled addr 0x28fc664 size 0xc virtual false final false
inline void set_Enabled(bool  value) ;

/// @brief Method set_LingerTime addr 0x28fc670 size 0x8 virtual false final false
inline void set_LingerTime(int32_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "LingerOption", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LingerOption(LingerOption && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LingerOption", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LingerOption(LingerOption const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LingerOption()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::LingerOption, 0x18>, "Size mismatch!");

} // namespace end def System::Net::Sockets
NEED_NO_BOX(::System::Net::Sockets::LingerOption);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::LingerOption*, "System.Net.Sockets", "LingerOption");
