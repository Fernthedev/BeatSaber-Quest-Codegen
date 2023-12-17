#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ArrayExtensions)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class ArrayExtensions;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::ArrayExtensions);
// Type: HoudiniEngineUnity::ArrayExtensions
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9822))
// CS Name: ::HoudiniEngineUnity::ArrayExtensions*
class CORDL_TYPE ArrayExtensions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline void Init(::ArrayW<T,::Array<T>*>  array, T  defaultValue) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline void Init(::System::Collections::Generic::List_1<T>*  array, T  defaultValue) ;

/// @brief Method CopyToWithResize addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline void CopyToWithResize(::ArrayW<T,::Array<T>*>  srcArray, ByRef<::ArrayW<T,::Array<T>*>>  destArray) ;

/// @brief Method IsEquivalentArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool IsEquivalentArray(::ArrayW<T,::Array<T>*>  arr, ::ArrayW<T,::Array<T>*>  other) ;

/// @brief Method IsNull addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool IsNull(::ArrayW<T,::Array<T>*>  arr) ;

// Ctor Parameters [CppParam { name: "", ty: "ArrayExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArrayExtensions(ArrayExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArrayExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArrayExtensions(ArrayExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ArrayExtensions()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::ArrayExtensions, 0x10>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::ArrayExtensions);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::ArrayExtensions*, "HoudiniEngineUnity", "ArrayExtensions");
