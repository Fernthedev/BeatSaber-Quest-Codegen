// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Models.DeserializableList`1
#include "Oculus/Platform/Models/DeserializableList_1.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Team
  class Team;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.Models.TeamList
  class TeamList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::Team*> {
    public:
    // Creating value type constructor for type: TeamList
    TeamList() noexcept {}
    // public System.Void .ctor(System.IntPtr a)
    // Offset: 0x14D72B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TeamList* New_ctor(System::IntPtr a) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::TeamList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TeamList*, creationType>(a)));
    }
  }; // Oculus.Platform.Models.TeamList
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::TeamList*, "Oculus.Platform.Models", "TeamList");
// Writing includes for template specializations
// Writing MetadataGetter for method: Oculus::Platform::Models::TeamList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
