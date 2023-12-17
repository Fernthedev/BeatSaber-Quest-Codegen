#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LockHolder)
namespace System::Threading {
class Lock;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Threading {
struct LockHolder;
}
// Write type traits
MARK_VAL_T(::System::Threading::LockHolder);
// Type: System.Threading::LockHolder
namespace System::Threading {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2695))
// CS Name: ::System.Threading::LockHolder
struct CORDL_TYPE LockHolder : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _lock offset 0x0
 __declspec(property(get=__get__lock, put=__set__lock)) ::System::Threading::Lock*  _lock;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set__lock(::System::Threading::Lock*  value) ;

constexpr ::System::Threading::Lock* __get__lock() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Lock*> __get__lock() const;

/// @brief Method Hold addr 0x2614158 size 0x24 virtual false final false
static inline ::System::Threading::LockHolder Hold(::System::Threading::Lock*  l) ;

/// @brief Method Dispose addr 0x2614184 size 0x1c virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "_lock", ty: "::System::Threading::Lock*", modifiers: "", def_value: None }]
constexpr LockHolder(::System::Threading::Lock*  _lock) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit LockHolder(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 LockHolder()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::LockHolder, 0x8>, "Size mismatch!");

} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::LockHolder, "System.Threading", "LockHolder");
