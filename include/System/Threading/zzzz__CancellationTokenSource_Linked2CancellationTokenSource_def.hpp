#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
CORDL_MODULE_EXPORT(CancellationTokenSource_Linked2CancellationTokenSource)
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading {
struct CancellationTokenRegistration;
}
// Forward declare root types
namespace System::Threading {
class __CancellationTokenSource__Linked2CancellationTokenSource;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource);
// Type: ::Linked2CancellationTokenSource
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2688))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2685))
// CS Name: ::CancellationTokenSource::Linked2CancellationTokenSource*
class CORDL_TYPE __CancellationTokenSource__Linked2CancellationTokenSource : public ::System::Threading::CancellationTokenSource {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::System::Threading::CancellationTokenSource)]{};

/// @brief Field _reg1 offset 0x40
 __declspec(property(get=__get__reg1, put=__set__reg1)) ::System::Threading::CancellationTokenRegistration  _reg1;

/// @brief Field _reg2 offset 0x58
 __declspec(property(get=__get__reg2, put=__set__reg2)) ::System::Threading::CancellationTokenRegistration  _reg2;

constexpr void __set__reg1(::System::Threading::CancellationTokenRegistration  value) ;

constexpr ::System::Threading::CancellationTokenRegistration& __get__reg1() ;

constexpr ::System::Threading::CancellationTokenRegistration const& __get__reg1() const;

constexpr void __set__reg2(::System::Threading::CancellationTokenRegistration  value) ;

constexpr ::System::Threading::CancellationTokenRegistration& __get__reg2() ;

constexpr ::System::Threading::CancellationTokenRegistration const& __get__reg2() const;

static inline ::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource* New_ctor(::System::Threading::CancellationToken  token1, ::System::Threading::CancellationToken  token2) ;

/// @brief Method .ctor addr 0x2613958 size 0x10c virtual false final false
inline void _ctor(::System::Threading::CancellationToken  token1, ::System::Threading::CancellationToken  token2) ;

/// @brief Method Dispose addr 0x2613cc8 size 0x3c virtual true final false
inline void Dispose(bool  disposing) ;

// Ctor Parameters [CppParam { name: "", ty: "__CancellationTokenSource__Linked2CancellationTokenSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CancellationTokenSource__Linked2CancellationTokenSource(__CancellationTokenSource__Linked2CancellationTokenSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CancellationTokenSource__Linked2CancellationTokenSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CancellationTokenSource__Linked2CancellationTokenSource(__CancellationTokenSource__Linked2CancellationTokenSource const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __CancellationTokenSource__Linked2CancellationTokenSource()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource, 0x70>, "Size mismatch!");

} // namespace end def System::Threading
NEED_NO_BOX(::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource*, "System.Threading", "CancellationTokenSource/Linked2CancellationTokenSource");
