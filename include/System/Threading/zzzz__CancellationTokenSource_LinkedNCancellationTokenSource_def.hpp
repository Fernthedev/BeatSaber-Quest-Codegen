#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
CORDL_MODULE_EXPORT(CancellationTokenSource_LinkedNCancellationTokenSource)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
class __CancellationTokenSource__LinkedNCancellationTokenSource____c;
}
// Forward declare root types
namespace System::Threading {
class __CancellationTokenSource__LinkedNCancellationTokenSource;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::__CancellationTokenSource__LinkedNCancellationTokenSource);
// Type: ::LinkedNCancellationTokenSource
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2688))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2687))
// CS Name: ::CancellationTokenSource::LinkedNCancellationTokenSource*
class CORDL_TYPE __CancellationTokenSource__LinkedNCancellationTokenSource : public ::System::Threading::CancellationTokenSource {
public:
// Declarations
using __c = ::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Threading::CancellationTokenSource)]{};

static inline void setStaticF_s_linkedTokenCancelDelegate(::System::Action_1<::System::Object*>*  value) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_s_linkedTokenCancelDelegate() ;

// Ctor Parameters [CppParam { name: "", ty: "__CancellationTokenSource__LinkedNCancellationTokenSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CancellationTokenSource__LinkedNCancellationTokenSource(__CancellationTokenSource__LinkedNCancellationTokenSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CancellationTokenSource__LinkedNCancellationTokenSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CancellationTokenSource__LinkedNCancellationTokenSource(__CancellationTokenSource__LinkedNCancellationTokenSource const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __CancellationTokenSource__LinkedNCancellationTokenSource()  = default;
public:


// Fields

// Static field s_linkedTokenCancelDelegate


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__CancellationTokenSource__LinkedNCancellationTokenSource, 0x40>, "Size mismatch!");

} // namespace end def System::Threading
NEED_NO_BOX(::System::Threading::__CancellationTokenSource__LinkedNCancellationTokenSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__CancellationTokenSource__LinkedNCancellationTokenSource*, "System.Threading", "CancellationTokenSource/LinkedNCancellationTokenSource");
