#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CancellationCallbackCoreWorkArguments)
namespace System::Threading {
template<typename T>
class SparselyPopulatedArrayFragment_1;
}
namespace System::Threading {
class CancellationCallbackInfo;
}
// Forward declare root types
namespace System::Threading {
struct CancellationCallbackCoreWorkArguments;
}
// Write type traits
MARK_VAL_T(::System::Threading::CancellationCallbackCoreWorkArguments);
// Type: System.Threading::CancellationCallbackCoreWorkArguments
namespace System::Threading {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2689))
// CS Name: ::System.Threading::CancellationCallbackCoreWorkArguments
struct CORDL_TYPE CancellationCallbackCoreWorkArguments : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _currArrayFragment offset 0x0
 __declspec(property(get=__get__currArrayFragment, put=__set__currArrayFragment)) ::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>*  _currArrayFragment;

/// @brief Field _currArrayIndex offset 0x8
 __declspec(property(get=__get__currArrayIndex, put=__set__currArrayIndex)) int32_t  _currArrayIndex;

constexpr void __set__currArrayFragment(::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>*  value) ;

constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>* __get__currArrayFragment() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>*> __get__currArrayFragment() const;

constexpr void __set__currArrayIndex(int32_t  value) ;

constexpr int32_t& __get__currArrayIndex() ;

constexpr int32_t const& __get__currArrayIndex() const;

/// @brief Method .ctor addr 0x2613570 size 0xc virtual false final false
inline void _ctor(::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>*  currArrayFragment, int32_t  currArrayIndex) ;

// Ctor Parameters [CppParam { name: "_currArrayFragment", ty: "::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>*", modifiers: "", def_value: None }, CppParam { name: "_currArrayIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CancellationCallbackCoreWorkArguments(::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>*  _currArrayFragment, int32_t  _currArrayIndex) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CancellationCallbackCoreWorkArguments(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CancellationCallbackCoreWorkArguments()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::CancellationCallbackCoreWorkArguments, 0x10>, "Size mismatch!");

} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::CancellationCallbackCoreWorkArguments, "System.Threading", "CancellationCallbackCoreWorkArguments");
