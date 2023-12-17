#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NativeArrayDisposeJob)
namespace Unity::Collections {
struct NativeArrayDispose;
}
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace Unity::Collections {
struct NativeArrayDisposeJob;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::NativeArrayDisposeJob);
// Type: Unity.Collections::NativeArrayDisposeJob
namespace Unity::Collections {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10001))
// CS Name: ::Unity.Collections::NativeArrayDisposeJob
struct CORDL_TYPE NativeArrayDisposeJob : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Data offset 0x0
 __declspec(property(get=__get_Data, put=__set_Data)) ::Unity::Collections::NativeArrayDispose  Data;

/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

constexpr void __set_Data(::Unity::Collections::NativeArrayDispose  value) ;

constexpr ::Unity::Collections::NativeArrayDispose& __get_Data() ;

constexpr ::Unity::Collections::NativeArrayDispose const& __get_Data() const;

/// @brief Method Execute addr 0x2c9e068 size 0x44 virtual true final true
inline void Execute() ;

// Ctor Parameters [CppParam { name: "Data", ty: "::Unity::Collections::NativeArrayDispose", modifiers: "", def_value: None }]
constexpr NativeArrayDisposeJob(::Unity::Collections::NativeArrayDispose  Data) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArrayDisposeJob(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArrayDisposeJob()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeArrayDisposeJob, 0x10>, "Size mismatch!");

} // namespace end def Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeArrayDisposeJob, "Unity.Collections", "NativeArrayDisposeJob");
